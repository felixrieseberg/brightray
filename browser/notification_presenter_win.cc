// Copyright (c) 2012 The Chromium Authors. All rights reserved.
// Copyright (c) 2013 Patrick Reynolds <piki@github.com>. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE-CHROMIUM file.

#include "browser/linux/notification_presenter_win.h"

#include "base/bind.h"
#include "base/logging.h"
#include "base/files/file_enumerator.h"
#include "base/strings/string_util.h"
#include "base/strings/utf_string_conversions.h"
#include "content/public/browser/desktop_notification_delegate.h"
#include "content/public/common/platform_notification_data.h"
#include "common/application_info.h"
#include <stdlib.h>
#include <windows.h>
#include <vector>
#include "third_party/skia/include/core/SkBitmap.h"

namespace brightray {
awfagsdfgsdfg
namespace {

}  // namespace

// static
NotificationPresenter* NotificationPresenter::Create() {
  return new NotificationPresenterWin;
}

NotificationPresenterWin::NotificationPresenterWin()
    : notifications_(nullptr) {
}

NotificationPresenterWin::~NotificationPresenterWin() {
}

void NotificationPresenterWin::ShowNotification(
    const content::PlatformNotificationData& data,
    const SkBitmap& icon,
    scoped_ptr<content::DesktopNotificationDelegate> delegate_ptr,
    base::Closure* cancel_callback) {
  // std::string title = base::UTF16ToUTF8(data.title);
  // std::string body = base::UTF16ToUTF8(data.body);
  
  // NOTIFYICONDATA icon_data;
  // InitIconData(&icon_data);
  // icon_data.uFlags |= NIF_INFO;
  // icon_data.dwInfoFlags = NIIF_INFO;
  // wcscpy_s(icon_data.szInfoTitle, title.c_str());
  // wcscpy_s(icon_data.szInfo, body.c_str());
  // icon_data.uTimeout = 0;

  // base::win::Version win_version = base::win::GetVersion();
  // if (!icon.IsEmpty() && win_version != base::win::VERSION_PRE_XP) {
  //   balloon_icon_.Set(IconUtil::CreateHICONFromSkBitmap(icon.AsBitmap()));
  //   icon_data.hBalloonIcon = balloon_icon_.Get();
  //   icon_data.dwInfoFlags = NIIF_USER | NIIF_LARGE_ICON;
  // }

  // BOOL result = Shell_NotifyIcon(NIM_MODIFY, &icon_data);
}

void NotificationPresenterWin::CancelNotification() {
}

void NotificationPresenterWin::DeleteNotification() {
}

void NotificationPresenterWin::OnNotificationClosed() {
}

void NotificationPresenterWin::OnNotificationView() {
}

}  // namespace brightray
