#ifndef USER_INTERFACE_LANGUAGES_RUSSIAN_H_
#define USER_INTERFACE_LANGUAGES_RUSSIAN_H_
/********************************************************************
 *
 * VERY IMPORTANT.
 * This file should not be saved with UTF-8 encoding
 * Use Notepad++ on Windows with ANSI encoding
 * or emacs on Linux with windows-1252-unix encoding
 *
 ********************************************************************/
#if defined(PLATFORM_GD77) || defined(PLATFORM_GD77S) || defined(PLATFORM_DM1801) || defined(PLATFORM_DM1801A) || defined(PLATFORM_RD5R)
__attribute__((section(".upper_text")))
#endif
const stringsTable_t russianLanguage =
{
.magicNumber                            = { LANGUAGE_TAG_MAGIC_NUMBER, LANGUAGE_TAG_VERSION },
.LANGUAGE_NAME 				= "Русский", // MaxLen: 16
.menu					= "Меню", // MaxLen: 16
.credits				= "Авторы", // MaxLen: 16
.zone					= "Зона", // MaxLen: 16
.rssi					= "RSSI", // MaxLen: 16
.battery				= "Аккумулятор", // MaxLen: 16
.contacts				= "Контакты", // MaxLen: 16
.last_heard				= "Последняя связь", // MaxLen: 16
.firmware_info				= "О прошивке", // MaxLen: 16
.options				= "Настройки", // MaxLen: 16
.display_options			= "Экран", // MaxLen: 16
.sound_options				= "Звук", // MaxLen: 16
.channel_details			= "Настр. канала", // MaxLen: 16
.language				= "Выбор языка", // MaxLen: 16
.new_contact				= "Новый контакт", // MaxLen: 16
.dmr_contacts				= "Контакты DMR", // MaxLen: 16
.contact_details			= "Настр. контакта", // MaxLen: 16
.hotspot_mode				= "Хотспот", // MaxLen: 16
.built					= "Сборка", // MaxLen: 16
.zones					= "Зоны", // MaxLen: 16
.keypad					= "Клавиатура", // MaxLen: 12 (with .ptt)
.ptt					= "PTT", // MaxLen: 12 (with .keypad, .mode)
.locked					= "Блокировка", // MaxLen: 15
.press_sk2_plus_star			= "Нажать SK2 и *", // MaxLen: 16
.to_unlock				= "для разблок.", // MaxLen: 16
.unlocked				= "Разблокировано", // MaxLen: 15
.power_off				= "Выключение...", // MaxLen: 16
.error					= "ОШИБКА", // MaxLen: 8
.rx_only				= "Только прием", // MaxLen: 14
.out_of_band				= "ВНЕ ДИАПАЗОНА", // MaxLen: 14
.timeout				= "ТАЙМАУТ", // MaxLen: 8
.tg_entry				= "Номер группы", // MaxLen: 15
.pc_entry				= "ID пользователя", // MaxLen: 15
.user_dmr_id				= "DMR ID", // MaxLen: 15
.contact 				= "Контакт", // MaxLen: 15
.accept_call				= "Принять вызов", // MaxLen: 16
.private_call				= "Приватный вызов", // MaxLen: 16
.squelch				= "Шумопод.", // MaxLen: 8
.quick_menu 				= "Быстрое меню", // MaxLen: 16
.filter					= "Фильтр", // MaxLen: 7 (with ':' + settings: .none, "CC", "CC,TS", "CC,TS,TG")
.all_channels				= "Все каналы", // MaxLen: 16
.gotoChannel				= "К каналу",  // MaxLen: 11 (" 1024")
.scan					= "Сканирование", // MaxLen: 16
.channelToVfo				= "Канал в VFO", // MaxLen: 16
.vfoToChannel				= "VFO в канал", // MaxLen: 16
.vfoToNewChannel			= "VFO в нов. канал", // MaxLen: 16
.group					= "группа", // MaxLen: 16 (with .type)
.private				= "приват", // MaxLen: 16 (with .type)
.all					= "все", // MaxLen: 16 (with .type)
.type					= "Тип", // MaxLen: 16 (with .type)
.timeSlot				= "Таймслот", // MaxLen: 16 (plus ':' and  .none, '1' or '2')
.none					= "нет", // MaxLen: 16 (with .timeSlot, "Rx CTCSS:" and ""Tx CTCSS:", .filter/.mode/.dmr_beep)
.contact_saved				= "Сохранено", // MaxLen: 16
.duplicate				= "Дублировать", // MaxLen: 16
.tg					= "TG",  // MaxLen: 8
.pc					= "приват", // MaxLen: 8
.ts					= "TS", // MaxLen: 8
.mode					= "Режим",  // MaxLen: 12
.colour_code				= "Колоркод", // MaxLen: 16 (with ':' * .n_a)
.n_a					= "нет",// MaxLen: 16 (with ':' * .colour_code)
.bandwidth				= "Полоса", // MaxLen: 16 (with : + .n_a, "25kHz" or "12.5kHz")
.stepFreq				= "Шаг", // MaxLen: 7 (with ':' + xx.xxkHz fitted)
.tot					= "Таймер Tx", // MaxLen: 16 (with ':' + .off or 15..3825)
.off					= "выкл", // MaxLen: 16 (with ':' + .timeout_beep, .band_limits, aprs_decay)
.zone_skip				= "Проп. в зоне", // MaxLen: 16 (with ':' + .yes or .no)
.all_skip				= "Проп. всегда", // MaxLen: 16 (with ':' + .yes or .no)
.yes					= "да", // MaxLen: 16 (with ':' + .zone_skip, .all_skip)
.no					= "нет", // MaxLen: 16 (with ':' + .zone_skip, .all_skip, .aprs_decay)
.tg_list				= "Список групп", // MaxLen: 16 (with ':' and codeplug group name)
.on					= "вкл.", // MaxLen: 16 (with ':' + .band_limits)
.timeout_beep				= "Звук таймаута", // MaxLen: 16 (with ':' + .n_a or 5..20 + 's')
.list_full				= "Список полон",
.dmr_cc_scan				= "Скан к-кода", // MaxLen: 12 (with ':' + settings: .on or .off).
.band_limits				= "Бендлимит", // MaxLen: 16 (with ':' + .on or .off)
.beep_volume				= "Громк. сигн.", // MaxLen: 16 (with ':' + -24..6 + 'dB')
.dmr_mic_gain				= "Микр. DMR", // MaxLen: 16 (with ':' + -33..12 + 'dB')
.fm_mic_gain				= "Микр. FM", // MaxLen: 16 (with ':' + 0..31)
.key_long				= "Длит. наж.", // MaxLen: 11 (with ':' + x.xs fitted)
.key_repeat				= "Длит. повт.", // MaxLen: 11 (with ':' + x.xs fitted)
.dmr_filter_timeout			= "Фильтр DMR", // MaxLen: 16 (with ':' + 1..90 + 's')
.brightness				= "Яркость", // MaxLen: 16 (with ':' + 0..100 + '%')
.brightness_off				= "Мин. яркость", // MaxLen: 16 (with ':' + 0..100 + '%')
.contrast				= "Контраст", // MaxLen: 16 (with ':' + 12..30)
.screen_invert				= "инверт.", // MaxLen: 16
.screen_normal				= "норм.", // MaxLen: 16
.backlight_timeout			= "Время подсв.", // MaxLen: 16 (with ':' + .no to 30s)
.scan_delay				= "Пауза скан.", // MaxLen: 16 (with ':' + 1..30 + 's')
.yes___in_uppercase			= "ДА", // MaxLen: 8 (choice above green/red buttons)
.no___in_uppercase			= "НЕТ", // MaxLen: 8 (choice above green/red buttons)
.DISMISS				= "ОТКАЗ", // MaxLen: 8 (choice above green/red buttons)
.scan_mode				= "Режим скан.", // MaxLen: 16 (with ':' + .hold, .pause or .stop)
.hold					= "удерж.", // MaxLen: 16 (with ':' + .scan_mode)
.pause					= "пауза", // MaxLen: 16 (with ':' + .scan_mode)
.list_empty				= "Список пуст", // MaxLen: 16
.delete_contact_qm			= "Удалить контакт?", // MaxLen: 16
.contact_deleted			= "Контакт удален", // MaxLen: 16
.contact_used				= "Используется", // MaxLen: 16
.in_tg_list				= "в списке групп", // MaxLen: 16
.select_tx				= "Выбрать Tx", // MaxLen: 16
.edit_contact				= "Ред. контакт", // MaxLen: 16
.delete_contact				= "Удал. контакт", // MaxLen: 16
.group_call				= "Групповой вызов", // MaxLen: 16
.all_call				= "Вызвать всех", // MaxLen: 16
.tone_scan				= "Скан субтона", // MaxLen: 16
.low_battery				= "РАЗРЯЖЕНА !!!", // MaxLen: 16
.Auto					= "авто", // MaxLen 16 (with .mode + ':', .mode)
.manual					= "ручн.",  // MaxLen 16 (with .mode + ':', .mode)
.ptt_toggle				= "Фикс. PTT", // MaxLen 16 (with ':' + .on or .off)
.private_call_handling			= "Разр. приват", // MaxLen 16 (with ':' + .on or .off)
.stop					= "стоп", // Maxlen 16 (with ':' + .scan_mode/.dmr_beep)
.one_line				= "1 строка", // MaxLen 16 (with ':' + .contact)
.two_lines				= "2 строки", // MaxLen 16 (with ':' + .contact)
.new_channel				= "Нов. канал", // MaxLen: 16, leave room for a space and four channel digits after
.priority_order				= "Порядок", // MaxLen 16 (with ':' + 'Cc/DB/TA')
.dmr_beep				= "Сигнал DMR", // MaxLen 16 (with ':' + .star/.stop/.both/.none)
.start					= "в нач.", // MaxLen 16 (with ':' + .dmr_beep)
.both					= "все", // MaxLen 16 (with ':' + .dmr_beep)
.vox_threshold                          = "Чувств. VOX", // MaxLen 16 (with ':' + .off or 1..30)
.vox_tail                               = "Задержка VOX", // MaxLen 16 (with ':' + .n_a or '0.0s')
.audio_prompt				= "Звуки",// Maxlen 16 (with ':' + .silent, .beep or .voice_prompt_level_1)
.silent                                 = "выкл", // Maxlen 16 (with : + audio_prompt)
.rx_beep				= "Сигнал RX", // MaxLen 16 (with ':' + .carrier/.talker/.both/.none)
.beep					= "биппер", // Maxlen 16 (with : + audio_prompt)
.voice_prompt_level_1			= "голос", // Maxlen 16 (with : + audio_prompt, satellite "mode")
.transmitTalkerAliasTS1			= "Алиас TS1", // Maxlen 16 (with : + .on or .off)
.squelch_VHF				= "Шумопод. VHF",// Maxlen 16 (with : + XX%)
.squelch_UHF				= "Шумопод. UHF", // Maxlen 16 (with : + XX%)
.display_screen_invert 			= "Экран", // Maxlen 16 (with : + .screen_normal or .screen_invert)
.openGD77 				= "OpenGD77 RUS",// Do not translate
.talkaround 				= "Прям. связь", // Maxlen 16 (with ':' + .on , .off or .n_a)
.APRS 					= "APRS", // Maxlen 16 (with : + .transmitTalkerAliasTS1 or transmitTalkerAliasTS2)
.no_keys 				= "без клав.", // Maxlen 16 (with : + audio_prompt)
.notset                   = "Не найдено",
.voice_prompt_level_2			= "голос L2", // Maxlen 16 (with : + audio_prompt)
.voice_prompt_level_3			= "голос L3", // Maxlen 16 (with : + audio_prompt)
.dmr_filter				= "Фильтр DMR",// MaxLen: 12 (with ':' + settings: "TG" or "Ct" or "TGL")
.talker					= "Вызывающий",
.dmr_ts_filter				= "Фильтр TS", // MaxLen: 12 (with ':' + settings: .on or .off)
.dtmf_contact_list			= "Контакты DTMF", // Maxlen: 16
.channel_power				= "Мощность", //Displayed as "Ch Power:" + .from_master or "Ch Power:"+ power text e.g. "Power:500mW" . Max total length 16
.from_master				= "общ.",// Displayed if per-channel power is not enabled  the .channel_power, and also with .location in APRS settings.
.set_quickkey				= "Быстр. действ.", // MaxLen: 16
.dual_watch				= "Двойной Rx", // MaxLen: 16
.info					= "Информация", // MaxLen: 16 (with ':' + .off or .ts or .pwr or .both)
.pwr					= "мощн.",
.user_power				= "Своя мощн.",
.dmrid                    = "Ввод DMR ID",
.dmridtext                = "ID",
.seconds				= "сек.",
.radio_info				= "Дата и время",
.aliastext                = "Алиас",
.pin_code				= "Пин-код",
.please_confirm				= "Подтвердите", // MaxLen: 15
.vfo_freq_bind_mode			= "Связ. Tx с Rx",
.overwrite_qm				= "Переписать?", //Maxlen: 14 chars
.eco_level				= "Экономайзер",
.buttons				= "кнопки",
.leds					= "Светодиод",
.scan_dwell_time			= "Время скан.",
.battery_calibration			= "Кал. акк.",
.low					= "мин.",
.high					= "макс.",
.dmr_id					= "DMR ID",
.scan_on_boot				= "Автоскан",
.dtmf_entry				= "Ввод DTMF",
.name					= "Имя",
.carrier				= "Несущая",
.zone_empty 				= "Зона пуста", // Maxlen: 12 chars.
.time					= "Время",
.promiscuity                  = "Фильтры выкл.",
.hours					= "ч",
.minutes				= "мин",
.satellite				= "Спутники",
.alarm_time				= "Время сигн.",
.location				= "Координаты",
.date					= "Дата",
.timeZone				= "Час. пояс",
.suspend				= "Пауза",
.pass					= "Проход", // For satellite screen
.elevation				= "Вв.",
.azimuth				= "Аз.",
.inHHMMSS				= "Через",
.predicting				= "Вычисление",
.maximum				= "Макс",
.satellite_short		= "Спутники",
.local					= "местн.",
.UTC					= "UTC",
.symbols				= "СЮВЗ", // symbols: N,S,E,W
.not_set				= "НЕ ЗАДАНО",
.general_options		= "Общие",
.radio_options			= "Радиосвязь",
.auto_night				= "Авто реж.", // MaxLen: 16 (with .on or .off)
.dmr_rx_agc				= "АРУ DMR",
.speaker_click_suppress			= "Без щелчк.",
.gps					= "GPS",
.end_only				= "в конце",
.dmr_crc				= "DMR CRC",
.eco					= "Экономайзер",
.safe_power_on				= "Безоп. вкл.", // MaxLen: 16 (with ':' + .on or .off)
.auto_power_off				= "Авто выкл.", // MaxLen: 16 (with ':' + 30/60/90/120/180 or .no)
.apo_with_rf				= "Сброс по Rx", // MaxLen: 16 (with ':' + .yes or .no or .n_a)
.brightness_night				= "Ночн. ярк.", // MaxLen: 16 (with : + 0..100 + %)
.freq_set_VHF			= "Частота VHF",
.gps_acquiring			= "Поиск",
.altitude				= "Выс.",
.calibration            = "Калибровка",
.freq_set_UHF           = "Частота UHF",
.cal_frequency          = "Частота",
.cal_pwr                = "Мощность",
.pwr_set                = "Мощн.",
.factory_reset          = "Сброс",
.rx_tune				= "Настройка Rx",
.transmitTalkerAliasTS2	= "Алиас TS2", // Maxlen 16 (with : + .ta_text, 'APRS' , .both or .off)
.ta_text				= "текст",
.daytime_theme_day			= "Дневн. тема", // MaxLen: 16
.daytime_theme_night			= "Ночн. тема", // MaxLen: 16
.theme_chooser				= "Выбор цвета", // Maxlen: 16
.theme_options				= "Тема",
.theme_fg_default			= "Текст по умолч.", // MaxLen: 16 (+ colour rect)
.theme_bg				= "Фон", // MaxLen: 16 (+ colour rect)
.theme_fg_decoration			= "Декор.", // MaxLen: 16 (+ colour rect)
.theme_fg_text_input			= "Ввод текста", // MaxLen: 16 (+ colour rect)
.theme_fg_splashscreen			= "Пер. план загр.", // MaxLen: 16 (+ colour rect)
.theme_bg_splashscreen			= "Фон при загр.", // MaxLen: 16 (+ colour rect)
.theme_fg_notification			= "Текст опов.", // MaxLen: 16 (+ colour rect)
.theme_fg_warning_notification		= "Внимание", // MaxLen: 16 (+ colour rect)
.theme_fg_error_notification		= "Ошибка", // MaxLen: 16 (+ colour rect)
.theme_bg_notification                  = "Фон опов.", // MaxLen: 16 (+ colour rect)
.theme_fg_menu_name			= "Назв. меню", // MaxLen: 16 (+ colour rect)
.theme_bg_menu_name			= "Фон назв. меню", // MaxLen: 16 (+ colour rect)
.theme_fg_menu_item			= "Пункт меню", // MaxLen: 16 (+ colour rect)
.theme_fg_menu_item_selected		= "Курсор меню", // MaxLen: 16 (+ colour rect)
.theme_fg_options_value			= "Знач. парам.", // MaxLen: 16 (+ colour rect)
.theme_fg_header_text			= "Заголовок", // MaxLen: 16 (+ colour rect)
.theme_bg_header_text			= "Фон загол.", // MaxLen: 16 (+ colour rect)
.theme_fg_rssi_bar			= "RSSI", // MaxLen: 16 (+ colour rect)
.theme_fg_rssi_bar_s9p			= "RSSI S9+", // Maxlen: 16 (+colour rect)
.theme_fg_channel_name			= "Канал", // MaxLen: 16 (+ colour rect)
.theme_fg_channel_contact		= "Контакт", // MaxLen: 16 (+ colour rect)
.theme_fg_channel_contact_info		= "О контакте", // MaxLen: 16 (+ colour rect)
.theme_fg_zone_name			= "Зона", // MaxLen: 16 (+ colour rect)
.theme_fg_rx_freq			= "Частота Rx", // MaxLen: 16 (+ colour rect)
.theme_fg_tx_freq			= "Частота Tx", // MaxLen: 16 (+ colour rect)
.theme_fg_css_sql_values		= "Знач. CSS/SQL", // MaxLen: 16 (+ colour rect)
.theme_fg_tx_counter			= "Таймер Tx", // MaxLen: 16 (+ colour rect)
.theme_fg_polar_drawing			= "Диаграмма", // MaxLen: 16 (+ colour rect)
.theme_fg_satellite_colour		= "Спутник", // MaxLen: 16 (+ colour rect)
.theme_fg_gps_number			= "Номер GPS", // MaxLen: 16 (+ colour rect)
.theme_fg_gps_colour			= "Спутник GPS", // MaxLen: 16 (+ colour rect)
.theme_fg_bd_colour			= "Спутник BeiDou", // MaxLen: 16 (+ colour rect)
.theme_colour_picker_red		= "Красный", // MaxLen 16 (with ':' + 3 digits value)
.theme_colour_picker_green		= "Зеленый", // MaxLen 16 (with ':' + 3 digits value)
.theme_colour_picker_blue		= "Синий", // MaxLen 16 (with ':' + 3 digits value)
.volume					= "Громк.", // MaxLen: 8
.distance_sort				= "По расст.", // MaxLen 16 (with ':' + .on or .off)
.show_distance				= "Расстояние", // MaxLen 16 (with ':' + .on or .off)
.aprs_options				= "APRS", // MaxLen 16
.aprs_smart				= "умн.", // MaxLen 16 (with ':' + .mode)
.aprs_channel				= "Канал", // MaxLen 16 (with ':' + .location)
.aprs_decay				= "Увел. интерв.", // MaxLen 16 (with ':' + .on or .off)
.aprs_compress				= "Сжатие", // MaxLen 16 (with ':' + .on or .off)
.aprs_interval				= "Интервал", // MaxLen 16 (with ':' + 0.2..60 + 'min')
.aprs_message_interval			= "Интерв. сообщ.", // MaxLen 16 (with ':' + 3..30)
.aprs_slow_rate				= "Мал. частота", // MaxLen 16 (with ':' + 1..100 + 'min')
.aprs_fast_rate				= "Выс. частота", // MaxLen 16 (with ':' + 10..180 + 's')
.aprs_low_speed				= "Мин. скорость", // MaxLen 16 (with ':' + 2..30 + 'km/h')
.aprs_high_speed			= "Макс. скорость", // MaxLen 16 (with ':' + 2..90 + 'km/h')
.aprs_turn_angle			= "Угол", // MaxLen 16 (with ':' + 5..90 + '???')
.aprs_turn_slope			= "Спуск", // MaxLen 16 (with ':' + 1..255 + '???/v')
.aprs_turn_time				= "Время", // MaxLen 16 (with ':' + 5..180 + 's')
.auto_lock				= "Автоблок.", // MaxLen 16 (with ':' + .off or 0.5..15 (.5 step) + 'min')
.trackball				= "Трекбол", // MaxLen 16 (with ':' + .on or .off)
.dmr_force_dmo				= "Принуд. DMO", // MaxLen 16 (with ':' + .n_a or .on or .off)
.satcom                   = "SATCOM",
.ham                      = "Р/Л",
.cps                      = "по CPS",
.p3button                 = "SK1",
.p3buttonLong             = "[SK1]",
.p3info                   = "информация",
.p3reverse                = "реверс",
.p3talkaround             = "прямая связь",
.p3fastcall               = "быстр. канал",
.p3filter                 = "фильтры",
.priority                 = "Приоритет",

.gpsModuleFactory         = "GPS+Beidou",
.gpsModuleCustom          = "GPS+ГЛОНАСС",
.vfomenu                  = " Меню        Каналы ",
.chmenu                   = " Меню           VFO ",
.scanmenu                   = " Меню          Стоп ",
};
/********************************************************************
 *
 * VERY IMPORTANT.
 * This file should not be saved with UTF-8 encoding
 * Use Notepad++ on Windows with ANSI encoding
 * or emacs on Linux with windows-1252-unix encoding
 *
 ********************************************************************/
#endif /* USER_INTERFACE_LANGUAGES_CATALAN_H_ */
