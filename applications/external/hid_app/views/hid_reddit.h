#pragma once

#include <gui/view.h>

typedef struct Hid Hid;
typedef struct HidReddit HidReddit;

HidReddit* hid_reddit_alloc(Hid* bt_hid);

void hid_reddit_free(HidReddit* hid_reddit);

View* hid_reddit_get_view(HidReddit* hid_reddit);

void hid_reddit_set_connected_status(HidReddit* hid_reddit, bool connected);
