#ifndef GUICONSTANTS_H
#define GUICONSTANTS_H

#include <QString>
#include <QTranslator>
#include <QFont>

/* Milliseconds between model updates */
static const int MODEL_UPDATE_DELAY = 500;

/* AskPassphraseDialog -- Maximum passphrase length */
static const int MAX_PASSPHRASE_SIZE = 1024;

/* BitcoinGUI -- Size of icons and left margin in status bar */
static const int STATUSBAR_ICONSIZE = 16;
static const int STATUSBAR_MARGIN = 10;

/* Invalid field background style */
#define STYLE_INVALID "background:#FF8080"

/* Transaction list -- unconfirmed transaction */
#define COLOR_UNCONFIRMED QColor(128, 128, 128)
/* Transaction list -- negative amount */
#define COLOR_NEGATIVE QColor(165, 75, 75)
/* Transaction list -- positive amount */
#define COLOR_POSITIVE QColor(95, 140, 95)
/* Transaction list -- bare address (without label) */
#define COLOR_BAREADDRESS QColor(140, 140, 140)

/* Custom colors / fonts/ styles */
#define COLOR_VERIBLUE QColor(000, 04A, 087)
#define STRING_VERIBLUE QString("#0a3057")
#define COLOR_VERIBLUE_LT QColor(065, 139, 202)
#define STRING_VERIBLUE_LT QString("#418BCA")
#define STRING_VERIFONT QString("#444748")

static const int TOOLBAR_WIDTH = 100;
static const int HEADER_WIDTH = 964;
static const int HEADER_HEIGHT = 160;
static const int BUTTON_WIDTH = 140;
static const int BUTTON_HEIGHT = 27;
static const int FRAMEBLOCKS_LABEL_WIDTH = 100;

static const int WINDOW_MIN_WIDTH = TOOLBAR_WIDTH + HEADER_WIDTH;
#ifdef Q_OS_WIN
static const int WINDOW_MIN_HEIGHT = 768;
#else
#ifdef Q_OS_MAC
static const int WINDOW_MIN_HEIGHT = 768;
#else
static const int WINDOW_MIN_HEIGHT = 768;
#endif
#endif

static const QFont veriFont("Lato", 11, QFont::Normal, false);
static const QFont veriFontLarge("Lato", 14, QFont::Normal, false);
static const QFont veriFontMedium("Lato", 10, QFont::Normal, false);
static const QFont veriFontSmall("Lato", 9, QFont::Normal, false);
static const QFont veriFontSmaller("Lato", 8, QFont::Normal, false);

/* Tooltips longer than this (in characters) are converted into rich text,
   so that they can be word-wrapped.
 */
static const int TOOLTIP_WRAP_THRESHOLD = 80;

/* Maximum allowed URI length */
static const int MAX_URI_LENGTH = 255;

/* QRCodeDialog -- size of exported QR Code image */
#define EXPORT_IMAGE_SIZE 256

#endif // GUICONSTANTS_H
