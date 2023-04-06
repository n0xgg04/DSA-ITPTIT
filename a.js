function getTask() {
    return $('.learning__headerIW').text();
}

function nextQuestion() {
    $('#learning__nextItem').click()
}

async function delay(ms) {
    return new Promise(resolve => setTimeout(resolve, ms));
}

const SolveRadioQuestion = async () => {
    $('#SeeAnswer').click();
    await delay(1000)
    var inputId = $('.multiRadio.correct input[type="radio"]').attr('id');
    $('#SeeAnswer').click();
    $('#' + inputId).click();
    await delay(1000)
    $('#CheckAnswer').click();
    await delay(1000)
}

function checkIfNotAQuestion() {
    return $('.learning__stepInstructionsTitle').text() != ''
}

async function SolveManyOptionQuestion() {
    arr = $('.prMCQ__answers.prMCQ__answers--checked.prMCQ__answers--correct label');
    delay(1500)
    arr.map((one) => arr[one].click())
}

async function DoTask() {
    switch (getTask()) {
        case 'Choose the correct answer.': await SolveRadioQuestion();
            return 0;
        case 'Choose all correct answers.': await SolveManyOptionQuestion();
            return 0;
        case 'Choose four corrects answer.': await SolveManyOptionQuestion();
            return 0;
        case 'Choose two corrects answer.': await SolveManyOptionQuestion();
            return 0;
        case 'Choose three corrects answer.': await SolveManyOptionQuestion();
            return 0;
        default: return 1;
    }
}
while (checkIfNotAQuestion()) {
    $('#learning__nextItem').click()
    await delay(1000)
}

var FailedTime = 0;
while (!checkIfNotAQuestion() && FailedTime < 3) {
    FailedTime += await DoTask();
    await delay(1000)
    nextQuestion();
}