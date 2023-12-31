О проекте:

Макет приложения «Криптокошелёк» с элементами защиты.


Приложение содержит в себе:

- Страницу авторизации, с маскриуемым пин-кодом при введении.

- Страницу «Счета», на которой внутри панели отображаются элементы для просмотра ID счёта, суммы и даты открытия, а также кнопки для пролистывания текущего счёта вперёд и назад, расположенные под панелью. При пролистывании в поля загружаются соответствующие данные нового счёта, и меняется фоновый цвет или фоновое изображение панели. Каждому счёту в памяти приложения соответствует структура с полями, содержащими ID счёта, его сумму дату открытия.
Структуры счетов в памяти приложения хранятся в массиве.

Иллюстрирование работы проекта:

При запуске открывается авторизация:

![image](https://github.com/BreadOwl/201_351_Igumnova_ex/assets/71919494/4fcb23d2-f376-4054-867d-28a7b478711c)


При неудачном введении пароля, выскакивает предупреждение о неверном пароле:

![image](https://github.com/BreadOwl/201_351_Igumnova_ex/assets/71919494/18f54cdf-d43d-4c92-9ef0-a291140df5bc)


Если пароль верный, то открывается страница Счета.

![image](https://github.com/BreadOwl/201_351_Igumnova_ex/assets/71919494/ae1be3ab-0a2b-4518-8f4a-99b4f3b26842)



Счетов может быть несколько, их можно листать с помощью кнопок, каждый имеет свое оформление.

![image](https://github.com/BreadOwl/201_351_Igumnova_ex/assets/71919494/7183ecd0-fc4a-4cc9-b846-985b1fda3b2c)

