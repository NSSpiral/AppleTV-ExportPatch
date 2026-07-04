#include <dlfcn.h>
#include <stdio.h>

int main() {
    void *h = dlopen("/Applications/AppleTV.app/AppleTV", RTLD_NOLOAD);
    if (!h) h = dlopen("/Applications/AppleTV.app/AppleTV", RTLD_LAZY);
    if (!h) { printf("FAIL: dlopen: %s\n", dlerror()); return 1; }

    int pass = 0, fail = 0;
    void *p;

    p = dlsym(h, "OBJC_CLASS_$_ATV2StepVerificationOperation");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATV2StepVerificationOperation\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATV2StepVerificationOperation");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATV2StepVerificationOperation\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVAPDirectedScanController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVAPDirectedScanController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVAPDirectedScanController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVAPDirectedScanController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVAPNameEntryController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVAPNameEntryController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVAPNameEntryController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVAPNameEntryController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVAPNetworkMenuController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVAPNetworkMenuController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVAPNetworkMenuController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVAPNetworkMenuController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVAPPasswordEntryController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVAPPasswordEntryController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVAPPasswordEntryController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVAPPasswordEntryController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVAPTestController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVAPTestController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVAPTestController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVAPTestController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVAPWEPPasswordMenuController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVAPWEPPasswordMenuController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVAPWEPPasswordMenuController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVAPWEPPasswordMenuController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVAction");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVAction\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVAction");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVAction\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVActionButtonMenuItem");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVActionButtonMenuItem\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVActionButtonMenuItem");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVActionButtonMenuItem\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVActionCollectionView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVActionCollectionView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVActionCollectionView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVActionCollectionView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVActivityIndicatorView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVActivityIndicatorView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVActivityIndicatorView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVActivityIndicatorView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVAddSiteEntry");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVAddSiteEntry\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVAddSiteEntry");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVAddSiteEntry\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVAddSiteService");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVAddSiteService\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVAddSiteService");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVAddSiteService\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVAddToFavoritesButtonControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVAddToFavoritesButtonControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVAddToFavoritesButtonControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVAddToFavoritesButtonControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVAddToFavoritesMenuItem");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVAddToFavoritesMenuItem\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVAddToFavoritesMenuItem");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVAddToFavoritesMenuItem\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVAirPlayCRDModeAutostartController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVAirPlayCRDModeAutostartController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVAirPlayCRDModeAutostartController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVAirPlayCRDModeAutostartController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVAirPlayCRDModeMessageControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVAirPlayCRDModeMessageControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVAirPlayCRDModeMessageControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVAirPlayCRDModeMessageControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVAirPlayCRDModeShroudController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVAirPlayCRDModeShroudController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVAirPlayCRDModeShroudController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVAirPlayCRDModeShroudController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVAirPlayDataClient");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVAirPlayDataClient\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVAirPlayDataClient");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVAirPlayDataClient\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVAirPlayUtilities");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVAirPlayUtilities\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVAirPlayUtilities");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVAirPlayUtilities\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVAirTunesConnectionControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVAirTunesConnectionControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVAirTunesConnectionControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVAirTunesConnectionControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVAirTunesImageLoader");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVAirTunesImageLoader\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVAirTunesImageLoader");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVAirTunesImageLoader\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVAirTunesManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVAirTunesManager\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVAirTunesManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVAirTunesManager\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVAirTunesProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVAirTunesProvider\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVAirTunesProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVAirTunesProvider\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVAnimations");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVAnimations\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVAnimations");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVAnimations\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVAppAVAsset");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVAppAVAsset\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVAppAVAsset");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVAppAVAsset\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVAppBackgroundPlayer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVAppBackgroundPlayer\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVAppBackgroundPlayer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVAppBackgroundPlayer\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVAppControlConfigurationFactory");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVAppControlConfigurationFactory\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVAppControlConfigurationFactory");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVAppControlConfigurationFactory\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVAppControlFactory");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVAppControlFactory\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVAppControlFactory");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVAppControlFactory\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVAppController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVAppController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVAppController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVAppController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVAppDocumentController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVAppDocumentController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVAppDocumentController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVAppDocumentController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVAppEventDelegate");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVAppEventDelegate\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVAppEventDelegate");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVAppEventDelegate\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVAppInfo");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVAppInfo\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVAppInfo");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVAppInfo\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVAppJSITunesConnect");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVAppJSITunesConnect\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVAppJSITunesConnect");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVAppJSITunesConnect\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVAppJSITunesStore");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVAppJSITunesStore\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVAppJSITunesStore");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVAppJSITunesStore\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVAppLaunchController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVAppLaunchController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVAppLaunchController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVAppLaunchController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVAppMerchant");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVAppMerchant\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVAppMerchant");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVAppMerchant\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVAppPhotoAsset");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVAppPhotoAsset\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVAppPhotoAsset");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVAppPhotoAsset\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVAppPlayerViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVAppPlayerViewController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVAppPlayerViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVAppPlayerViewController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVAppProxyViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVAppProxyViewController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVAppProxyViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVAppProxyViewController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVAppSlideShowViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVAppSlideShowViewController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVAppSlideShowViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVAppSlideShowViewController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVApplianceController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVApplianceController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVApplianceController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVApplianceController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVApplianceGlue");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVApplianceGlue\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVApplianceGlue");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVApplianceGlue\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVAsyncNetworkTest");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVAsyncNetworkTest\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVAsyncNetworkTest");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVAsyncNetworkTest\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVAudioAsset");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVAudioAsset\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVAudioAsset");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVAudioAsset\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVBSRController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVBSRController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVBSRController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVBSRController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVBSRLayer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVBSRLayer\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVBSRLayer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVBSRLayer\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVBSRManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVBSRManager\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVBSRManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVBSRManager\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVBannerView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVBannerView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVBannerView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVBannerView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVBaseFeedDocumentFactory");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVBaseFeedDocumentFactory\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVBaseFeedDocumentFactory");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVBaseFeedDocumentFactory\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVBlackScreenSaver");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVBlackScreenSaver\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVBlackScreenSaver");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVBlackScreenSaver\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVBlockAnimationDelegate");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVBlockAnimationDelegate\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVBlockAnimationDelegate");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVBlockAnimationDelegate\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVBlockNotificationHandler");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVBlockNotificationHandler\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVBlockNotificationHandler");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVBlockNotificationHandler\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVBlueDotUtilities");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVBlueDotUtilities\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVBlueDotUtilities");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVBlueDotUtilities\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVBundleFeedResource");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVBundleFeedResource\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVBundleFeedResource");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVBundleFeedResource\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVCFUserNotificationCenter");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVCFUserNotificationCenter\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVCFUserNotificationCenter");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVCFUserNotificationCenter\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVCFUserNotificationViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVCFUserNotificationViewController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVCFUserNotificationViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVCFUserNotificationViewController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVCarouselConfiguration");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVCarouselConfiguration\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVCarouselConfiguration");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVCarouselConfiguration\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVCarouselConfigurationEvaluator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVCarouselConfigurationEvaluator\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVCarouselConfigurationEvaluator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVCarouselConfigurationEvaluator\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVCarouselView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVCarouselView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVCarouselView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVCarouselView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVCarouselViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVCarouselViewController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVCarouselViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVCarouselViewController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVCarouselViewUIOpContext");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVCarouselViewUIOpContext\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVCarouselViewUIOpContext");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVCarouselViewUIOpContext\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVCarouselViewUIOpTypeDeleteInfo");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVCarouselViewUIOpTypeDeleteInfo\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVCarouselViewUIOpTypeDeleteInfo");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVCarouselViewUIOpTypeDeleteInfo\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVCarouselViewUIOpTypeEventInfo");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVCarouselViewUIOpTypeEventInfo\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVCarouselViewUIOpTypeEventInfo");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVCarouselViewUIOpTypeEventInfo\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVCatalogApplianceController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVCatalogApplianceController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVCatalogApplianceController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVCatalogApplianceController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVCatalogHandler");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVCatalogHandler\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVCatalogHandler");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVCatalogHandler\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVChainedAnimationGroup");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVChainedAnimationGroup\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVChainedAnimationGroup");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVChainedAnimationGroup\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVChainedAnimationGroupTuple");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVChainedAnimationGroupTuple\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVChainedAnimationGroupTuple");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVChainedAnimationGroupTuple\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVChicagoGamePreviewControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVChicagoGamePreviewControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVChicagoGamePreviewControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVChicagoGamePreviewControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVCloudMusicIdleStopMonitor");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVCloudMusicIdleStopMonitor\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVCloudMusicIdleStopMonitor");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVCloudMusicIdleStopMonitor\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVContainerView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVContainerView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVContainerView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVContainerView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVControlViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVControlViewController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVControlViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVControlViewController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVCountryEntry");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVCountryEntry\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVCountryEntry");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVCountryEntry\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVCoverflowViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVCoverflowViewController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVCoverflowViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVCoverflowViewController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVCupidAOSynchronizer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVCupidAOSynchronizer\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVCupidAOSynchronizer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVCupidAOSynchronizer\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVCupidAccessObject");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVCupidAccessObject\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVCupidAccessObject");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVCupidAccessObject\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVCupidAsset");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVCupidAsset\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVCupidAsset");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVCupidAsset\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVCupidController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVCupidController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVCupidController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVCupidController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVCupidDaemon");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVCupidDaemon\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVCupidDaemon");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVCupidDaemon\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVCupidDataClient");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVCupidDataClient\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVCupidDataClient");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVCupidDataClient\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVCupidDataQueryContext");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVCupidDataQueryContext\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVCupidDataQueryContext");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVCupidDataQueryContext\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVCupidImageFetchRecord");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVCupidImageFetchRecord\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVCupidImageFetchRecord");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVCupidImageFetchRecord\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVCupidMediaURLCacheRecord");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVCupidMediaURLCacheRecord\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVCupidMediaURLCacheRecord");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVCupidMediaURLCacheRecord\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVCupidMerchant");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVCupidMerchant\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVCupidMerchant");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVCupidMerchant\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVCupidMyPSAccessObject");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVCupidMyPSAccessObject\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVCupidMyPSAccessObject");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVCupidMyPSAccessObject\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVCupidMyPSAsset");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVCupidMyPSAsset\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVCupidMyPSAsset");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVCupidMyPSAsset\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVCupidMyPSImageLoadTask");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVCupidMyPSImageLoadTask\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVCupidMyPSImageLoadTask");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVCupidMyPSImageLoadTask\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVCupidMyPSPlatform");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVCupidMyPSPlatform\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVCupidMyPSPlatform");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVCupidMyPSPlatform\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVCupidMyPhotoStream");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVCupidMyPhotoStream\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVCupidMyPhotoStream");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVCupidMyPhotoStream\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVCupidMyPhotoStreamItem");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVCupidMyPhotoStreamItem\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVCupidMyPhotoStreamItem");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVCupidMyPhotoStreamItem\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVCupidPhotoBatch");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVCupidPhotoBatch\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVCupidPhotoBatch");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVCupidPhotoBatch\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVCupidPhotoBatchBrowserController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVCupidPhotoBatchBrowserController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVCupidPhotoBatchBrowserController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVCupidPhotoBatchBrowserController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVCupidPhotoBrowserTemplate");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVCupidPhotoBrowserTemplate\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVCupidPhotoBrowserTemplate");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVCupidPhotoBrowserTemplate\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVCupidPhotoGridController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVCupidPhotoGridController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVCupidPhotoGridController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVCupidPhotoGridController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVCupidRecentUpdatesStream");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVCupidRecentUpdatesStream\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVCupidRecentUpdatesStream");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVCupidRecentUpdatesStream\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVCupidSelectionHandler");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVCupidSelectionHandler\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVCupidSelectionHandler");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVCupidSelectionHandler\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVCupidSettingsController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVCupidSettingsController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVCupidSettingsController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVCupidSettingsController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVCupidSharedPSAccessObject");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVCupidSharedPSAccessObject\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVCupidSharedPSAccessObject");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVCupidSharedPSAccessObject\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVCupidSharedPSAsset");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVCupidSharedPSAsset\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVCupidSharedPSAsset");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVCupidSharedPSAsset\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVCupidSharedPSPlatform");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVCupidSharedPSPlatform\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVCupidSharedPSPlatform");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVCupidSharedPSPlatform\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVCupidSharedPhotoStream");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVCupidSharedPhotoStream\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVCupidSharedPhotoStream");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVCupidSharedPhotoStream\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVCupidSharedPhotoStreamItem");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVCupidSharedPhotoStreamItem\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVCupidSharedPhotoStreamItem");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVCupidSharedPhotoStreamItem\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVCupidUtils");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVCupidUtils\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVCupidUtils");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVCupidUtils\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVCupidVideoMediaAsset");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVCupidVideoMediaAsset\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVCupidVideoMediaAsset");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVCupidVideoMediaAsset\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVCursorTracker");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVCursorTracker\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVCursorTracker");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVCursorTracker\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVDPAPPhotoBrowserController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVDPAPPhotoBrowserController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVDPAPPhotoBrowserController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVDPAPPhotoBrowserController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVDataItemAcquisitionMonitor");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVDataItemAcquisitionMonitor\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVDataItemAcquisitionMonitor");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVDataItemAcquisitionMonitor\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVDatabasesResponse");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVDatabasesResponse\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVDatabasesResponse");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVDatabasesResponse\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVDateToMonthDayYearTransformer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVDateToMonthDayYearTransformer\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVDateToMonthDayYearTransformer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVDateToMonthDayYearTransformer\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVDefaultBehavior");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVDefaultBehavior\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVDefaultBehavior");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVDefaultBehavior\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVDefaultPhotos");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVDefaultPhotos\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVDefaultPhotos");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVDefaultPhotos\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVDetailedMediaWithImageHeaderControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVDetailedMediaWithImageHeaderControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVDetailedMediaWithImageHeaderControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVDetailedMediaWithImageHeaderControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVDetailedMetadataControlFactory");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVDetailedMetadataControlFactory\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVDetailedMetadataControlFactory");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVDetailedMetadataControlFactory\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVDeviceActivationAction");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVDeviceActivationAction\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVDeviceActivationAction");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVDeviceActivationAction\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVDeviceActivationOneShotMonitor");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVDeviceActivationOneShotMonitor\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVDeviceActivationOneShotMonitor");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVDeviceActivationOneShotMonitor\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVDeviceActivationTask");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVDeviceActivationTask\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVDeviceActivationTask");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVDeviceActivationTask\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVDictionaryFeedResource");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVDictionaryFeedResource\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVDictionaryFeedResource");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVDictionaryFeedResource\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVDirectionalRemoteConnectionHandler");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVDirectionalRemoteConnectionHandler\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVDirectionalRemoteConnectionHandler");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVDirectionalRemoteConnectionHandler\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVDocumentBannerConfiguration");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVDocumentBannerConfiguration\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVDocumentBannerConfiguration");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVDocumentBannerConfiguration\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVDocumentBannerConfigurationEvaluator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVDocumentBannerConfigurationEvaluator\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVDocumentBannerConfigurationEvaluator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVDocumentBannerConfigurationEvaluator\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVDocumentHeaderView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVDocumentHeaderView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVDocumentHeaderView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVDocumentHeaderView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVDottedQuadEntryController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVDottedQuadEntryController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVDottedQuadEntryController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVDottedQuadEntryController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVDynamicImageHeaderView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVDynamicImageHeaderView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVDynamicImageHeaderView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVDynamicImageHeaderView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVEpisodeBlueDotParameters");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVEpisodeBlueDotParameters\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVEpisodeBlueDotParameters");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVEpisodeBlueDotParameters\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVEpisodeTitleTransformer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVEpisodeTitleTransformer\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVEpisodeTitleTransformer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVEpisodeTitleTransformer\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFadeLayer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFadeLayer\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFadeLayer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFadeLayer\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFalseSKPaymentTransaction");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFalseSKPaymentTransaction\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFalseSKPaymentTransaction");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFalseSKPaymentTransaction\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFavorite");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFavorite\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFavorite");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFavorite\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFavoriteUnavailableController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFavoriteUnavailableController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFavoriteUnavailableController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFavoriteUnavailableController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFavoritesControlFactory");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFavoritesControlFactory\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFavoritesControlFactory");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFavoritesControlFactory\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFavoritesController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFavoritesController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFavoritesController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFavoritesController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFavoritesManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFavoritesManager\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFavoritesManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFavoritesManager\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFavoritesProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFavoritesProvider\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFavoritesProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFavoritesProvider\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFavoritesSelectionHandler");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFavoritesSelectionHandler\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFavoritesSelectionHandler");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFavoritesSelectionHandler\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedActionButtonElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedActionButtonElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedActionButtonElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedActionButtonElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedActionCollectionController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedActionCollectionController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedActionCollectionController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedActionCollectionController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedAdditionalMediaBadgeElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedAdditionalMediaBadgeElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedAdditionalMediaBadgeElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedAdditionalMediaBadgeElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedAdornedShelfElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedAdornedShelfElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedAdornedShelfElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedAdornedShelfElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedAudioAssetElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedAudioAssetElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedAudioAssetElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedAudioAssetElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedAudioController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedAudioController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedAudioController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedAudioController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedAudioPlayerElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedAudioPlayerElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedAudioPlayerElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedAudioPlayerElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedAuthenticationController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedAuthenticationController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedAuthenticationController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedAuthenticationController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedAuthenticationElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedAuthenticationElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedAuthenticationElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedAuthenticationElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedAuthenticationResources");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedAuthenticationResources\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedAuthenticationResources");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedAuthenticationResources\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedBadgeLabelElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedBadgeLabelElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedBadgeLabelElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedBadgeLabelElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedBannerHeaderElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedBannerHeaderElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedBannerHeaderElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedBannerHeaderElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedBaseballLineScorePreviewElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedBaseballLineScorePreviewElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedBaseballLineScorePreviewElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedBaseballLineScorePreviewElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedCarouselDataSource");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedCarouselDataSource\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedCarouselDataSource");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedCarouselDataSource\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedCatalogAgent");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedCatalogAgent\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedCatalogAgent");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedCatalogAgent\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedComboMenuItemLayerElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedComboMenuItemLayerElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedComboMenuItemLayerElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedComboMenuItemLayerElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedCommentsBadgeElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedCommentsBadgeElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedCommentsBadgeElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedCommentsBadgeElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedControlFactory");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedControlFactory\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedControlFactory");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedControlFactory\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedControlFactoryConfig");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedControlFactoryConfig\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedControlFactoryConfig");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedControlFactoryConfig\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedCyclerController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedCyclerController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedCyclerController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedCyclerController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedDataSource");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedDataSource\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedDataSource");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedDataSource\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedDialogElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedDialogElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedDialogElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedDialogElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedDividerElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedDividerElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedDividerElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedDividerElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedDocument");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedDocument\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedDocument");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedDocument\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedDocumentFactory");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedDocumentFactory\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedDocumentFactory");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedDocumentFactory\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedElementFactory");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedElementFactory\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedElementFactory");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedElementFactory\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedEvaluator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedEvaluator\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedEvaluator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedEvaluator\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedEventElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedEventElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedEventElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedEventElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedEventGroupElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedEventGroupElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedEventGroupElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedEventGroupElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedGenericCollectionElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedGenericCollectionElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedGenericCollectionElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedGenericCollectionElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedGridElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedGridElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedGridElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedGridElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedHTTPLiveStreamingAudioElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedHTTPLiveStreamingAudioElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedHTTPLiveStreamingAudioElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedHTTPLiveStreamingAudioElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedHTTPLiveStreamingVideoElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedHTTPLiveStreamingVideoElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedHTTPLiveStreamingVideoElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedHTTPLiveStreamingVideoElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedHeadToHeadBannerElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedHeadToHeadBannerElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedHeadToHeadBannerElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedHeadToHeadBannerElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedHeaderElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedHeaderElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedHeaderElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedHeaderElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedHeaderWithCountAndButtonsElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedHeaderWithCountAndButtonsElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedHeaderWithCountAndButtonsElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedHeaderWithCountAndButtonsElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedImageArrayPreviewElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedImageArrayPreviewElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedImageArrayPreviewElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedImageArrayPreviewElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedImageAssetElementType");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedImageAssetElementType\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedImageAssetElementType");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedImageAssetElementType\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedImageAssetProxy");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedImageAssetProxy\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedImageAssetProxy");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedImageAssetProxy\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedImageElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedImageElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedImageElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedImageElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedImageHeaderWithButtonsElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedImageHeaderWithButtonsElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedImageHeaderWithButtonsElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedImageHeaderWithButtonsElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedImageLoader");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedImageLoader\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedImageLoader");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedImageLoader\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedImagePreviewElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedImagePreviewElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedImagePreviewElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedImagePreviewElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedImageTextImageMenuItemElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedImageTextImageMenuItemElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedImageTextImageMenuItemElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedImageTextImageMenuItemElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedImageWithLabelsElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedImageWithLabelsElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedImageWithLabelsElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedImageWithLabelsElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedInitialSelectionElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedInitialSelectionElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedInitialSelectionElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedInitialSelectionElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedInterstitialElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedInterstitialElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedInterstitialElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedInterstitialElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedInterstitialGroupElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedInterstitialGroupElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedInterstitialGroupElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedInterstitialGroupElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedItemCollectionWithImageHeaderController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedItemCollectionWithImageHeaderController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedItemCollectionWithImageHeaderController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedItemCollectionWithImageHeaderController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedItemCollectionWithImageHeaderElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedItemCollectionWithImageHeaderElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedItemCollectionWithImageHeaderElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedItemCollectionWithImageHeaderElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedItemDetailController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedItemDetailController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedItemDetailController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedItemDetailController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedItemDetailControllerTemplate");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedItemDetailControllerTemplate\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedItemDetailControllerTemplate");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedItemDetailControllerTemplate\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedItemDetailElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedItemDetailElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedItemDetailElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedItemDetailElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedItemDetailWithImageHeaderController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedItemDetailWithImageHeaderController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedItemDetailWithImageHeaderController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedItemDetailWithImageHeaderController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedItemDetailWithImageHeaderElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedItemDetailWithImageHeaderElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedItemDetailWithImageHeaderElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedItemDetailWithImageHeaderElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedItemEventDelegate");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedItemEventDelegate\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedItemEventDelegate");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedItemEventDelegate\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedItemScriptEventDelegate");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedItemScriptEventDelegate\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedItemScriptEventDelegate");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedItemScriptEventDelegate\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedKeyedPreviewElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedKeyedPreviewElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedKeyedPreviewElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedKeyedPreviewElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedLabelElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedLabelElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedLabelElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedLabelElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedLabeledListElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedLabeledListElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedLabeledListElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedLabeledListElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedLinkElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedLinkElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedLinkElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedLinkElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedListByNavigationElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedListByNavigationElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedListByNavigationElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedListByNavigationElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedListScrollerSplitViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedListScrollerSplitViewController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedListScrollerSplitViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedListScrollerSplitViewController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedLongDescriptionPreviewElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedLongDescriptionPreviewElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedLongDescriptionPreviewElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedLongDescriptionPreviewElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedMediaAssetElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedMediaAssetElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedMediaAssetElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedMediaAssetElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedMediaBadgesElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedMediaBadgesElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedMediaBadgesElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedMediaBadgesElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedMediaBrowserController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedMediaBrowserController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedMediaBrowserController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedMediaBrowserController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedMediaBrowserElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedMediaBrowserElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedMediaBrowserElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedMediaBrowserElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedMenuElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedMenuElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedMenuElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedMenuElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedMenuItemElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedMenuItemElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedMenuItemElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedMenuItemElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedMenuSectionElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedMenuSectionElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedMenuSectionElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedMenuSectionElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedMerchant");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedMerchant\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedMerchant");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedMerchant\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedMerchantPlayerDelegate");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedMerchantPlayerDelegate\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedMerchantPlayerDelegate");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedMerchantPlayerDelegate\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedMetadataTitleHeaderElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedMetadataTitleHeaderElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedMetadataTitleHeaderElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedMetadataTitleHeaderElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedNavigationBarViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedNavigationBarViewController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedNavigationBarViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedNavigationBarViewController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedNavigationItemElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedNavigationItemElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedNavigationItemElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedNavigationItemElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedOptionDialogController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedOptionDialogController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedOptionDialogController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedOptionDialogController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedOptionListElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedOptionListElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedOptionListElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedOptionListElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedOverlayElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedOverlayElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedOverlayElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedOverlayElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedPagedGridDataSource");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedPagedGridDataSource\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedPagedGridDataSource");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedPagedGridDataSource\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedPagedGridElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedPagedGridElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedPagedGridElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedPagedGridElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedPhotoAssetElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedPhotoAssetElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedPhotoAssetElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedPhotoAssetElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedPhotoBatchElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedPhotoBatchElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedPhotoBatchElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedPhotoBatchElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedPhotoElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedPhotoElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedPhotoElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedPhotoElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedPopUpMenuElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedPopUpMenuElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedPopUpMenuElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedPopUpMenuElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedPosterElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedPosterElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedPosterElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedPosterElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedPreviewElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedPreviewElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedPreviewElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedPreviewElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedProgressBarElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedProgressBarElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedProgressBarElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedProgressBarElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedRatingElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedRatingElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedRatingElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedRatingElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedRelatedPlaybackElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedRelatedPlaybackElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedRelatedPlaybackElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedRelatedPlaybackElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedRelatedPlaybackViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedRelatedPlaybackViewController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedRelatedPlaybackViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedRelatedPlaybackViewController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedResourceEvaluation");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedResourceEvaluation\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedResourceEvaluation");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedResourceEvaluation\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedRootController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedRootController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedRootController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedRootController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedRootElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedRootElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedRootElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedRootElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedRottenTomatoesRatingElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedRottenTomatoesRatingElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedRottenTomatoesRatingElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedRottenTomatoesRatingElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedScreensaverPhotosActionButtonElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedScreensaverPhotosActionButtonElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedScreensaverPhotosActionButtonElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedScreensaverPhotosActionButtonElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedScriptArrayElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedScriptArrayElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedScriptArrayElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedScriptArrayElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedScrollerController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedScrollerController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedScrollerController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedScrollerController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedScrollerElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedScrollerElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedScrollerElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedScrollerElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedScrollingTextController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedScrollingTextController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedScrollingTextController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedScrollingTextController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedScrollingTextElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedScrollingTextElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedScrollingTextElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedScrollingTextElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedSearchElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedSearchElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedSearchElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedSearchElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedSearchResultsElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedSearchResultsElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedSearchResultsElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedSearchResultsElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedSearchResultsLoader");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedSearchResultsLoader\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedSearchResultsLoader");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedSearchResultsLoader\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedSearchTermMenuItemElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedSearchTermMenuItemElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedSearchTermMenuItemElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedSearchTermMenuItemElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedSearchViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedSearchViewController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedSearchViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedSearchViewController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedShelfElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedShelfElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedShelfElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedShelfElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedShelfListController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedShelfListController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedShelfListController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedShelfListController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedShelfListElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedShelfListElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedShelfListElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedShelfListElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedShelfSectionElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedShelfSectionElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedShelfSectionElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedShelfSectionElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedShowcaseCarouselViewUIDelegate");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedShowcaseCarouselViewUIDelegate\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedShowcaseCarouselViewUIDelegate");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedShowcaseCarouselViewUIDelegate\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedShowcaseElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedShowcaseElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedShowcaseElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedShowcaseElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedShowcaseLockingDelegate");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedShowcaseLockingDelegate\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedShowcaseLockingDelegate");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedShowcaseLockingDelegate\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedSignInSignOutMenuItemElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedSignInSignOutMenuItemElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedSignInSignOutMenuItemElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedSignInSignOutMenuItemElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedSnipeElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedSnipeElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedSnipeElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedSnipeElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedStandingsElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedStandingsElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedStandingsElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedStandingsElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedStandingsItemElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedStandingsItemElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedStandingsItemElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedStandingsItemElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedStarRatingElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedStarRatingElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedStarRatingElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedStarRatingElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedStylesElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedStylesElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedStylesElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedStylesElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedSubScrollerElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedSubScrollerElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedSubScrollerElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedSubScrollerElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedSuperShowcaseCarouselViewUIDelegate");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedSuperShowcaseCarouselViewUIDelegate\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedSuperShowcaseCarouselViewUIDelegate");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedSuperShowcaseCarouselViewUIDelegate\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedSuperShowcaseElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedSuperShowcaseElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedSuperShowcaseElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedSuperShowcaseElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedSuperShowcasePosterAdornmentElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedSuperShowcasePosterAdornmentElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedSuperShowcasePosterAdornmentElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedSuperShowcasePosterAdornmentElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedTableColumnDefinitionElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedTableColumnDefinitionElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedTableColumnDefinitionElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedTableColumnDefinitionElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedTableElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedTableElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedTableElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedTableElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedTableRowElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedTableRowElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedTableRowElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedTableRowElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedTextDetailColumnElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedTextDetailColumnElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedTextDetailColumnElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedTextDetailColumnElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedTextDetailElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedTextDetailElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedTextDetailElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedTextDetailElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedTextSectionElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedTextSectionElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedTextSectionElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedTextSectionElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedTextTableDataSet");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedTextTableDataSet\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedTextTableDataSet");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedTextTableDataSet\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedTopShelfElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedTopShelfElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedTopShelfElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedTopShelfElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedTrickPlayConfigElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedTrickPlayConfigElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedTrickPlayConfigElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedTrickPlayConfigElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedUniformTextTableViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedUniformTextTableViewController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedUniformTextTableViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedUniformTextTableViewController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedUpNextItemElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedUpNextItemElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedUpNextItemElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedUpNextItemElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedUtils");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedUtils\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedUtils");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedUtils\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedVideoAssetElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedVideoAssetElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedVideoAssetElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedVideoAssetElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedVideoCacheMonitor");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedVideoCacheMonitor\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedVideoCacheMonitor");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedVideoCacheMonitor\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedVideoController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedVideoController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedVideoController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedVideoController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedVideoElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedVideoElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedVideoElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedVideoElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedVideoFloatingButtonElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedVideoFloatingButtonElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedVideoFloatingButtonElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedVideoFloatingButtonElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedVideoFloatingButtonsElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedVideoFloatingButtonsElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedVideoFloatingButtonsElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedVideoFloatingButtonsElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedVideoPlayerElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedVideoPlayerElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedVideoPlayerElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedVideoPlayerElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedVideoPreviewImageElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedVideoPreviewImageElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedVideoPreviewImageElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedVideoPreviewImageElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFeedViewWithNavigationBarElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFeedViewWithNavigationBarElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFeedViewWithNavigationBarElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFeedViewWithNavigationBarElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFlagstaffLineScore");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFlagstaffLineScore\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFlagstaffLineScore");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFlagstaffLineScore\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFlagstaffLineScoreCyclerController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFlagstaffLineScoreCyclerController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFlagstaffLineScoreCyclerController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFlagstaffLineScoreCyclerController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFlagstaffPreview");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFlagstaffPreview\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFlagstaffPreview");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFlagstaffPreview\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFlagstaffPreviewImage");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFlagstaffPreviewImage\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFlagstaffPreviewImage");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFlagstaffPreviewImage\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFlagstaffPreviewImageCyclerController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFlagstaffPreviewImageCyclerController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFlagstaffPreviewImageCyclerController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFlagstaffPreviewImageCyclerController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFlagstaffPreviewImageOverLay");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFlagstaffPreviewImageOverLay\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFlagstaffPreviewImageOverLay");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFlagstaffPreviewImageOverLay\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFlickrAsset");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFlickrAsset\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFlickrAsset");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFlickrAsset\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFlickrAssetLoader");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFlickrAssetLoader\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFlickrAssetLoader");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFlickrAssetLoader\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFlickrCollection");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFlickrCollection\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFlickrCollection");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFlickrCollection\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFlickrCollectionController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFlickrCollectionController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFlickrCollectionController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFlickrCollectionController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFlickrContactsController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFlickrContactsController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFlickrContactsController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFlickrContactsController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFlickrContactsProviderForAccount");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFlickrContactsProviderForAccount\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFlickrContactsProviderForAccount");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFlickrContactsProviderForAccount\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFlickrControlFactory");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFlickrControlFactory\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFlickrControlFactory");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFlickrControlFactory\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFlickrDisplayInfoLoader");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFlickrDisplayInfoLoader\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFlickrDisplayInfoLoader");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFlickrDisplayInfoLoader\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFlickrImageProxy");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFlickrImageProxy\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFlickrImageProxy");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFlickrImageProxy\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFlickrImageSizeOperaion");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFlickrImageSizeOperaion\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFlickrImageSizeOperaion");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFlickrImageSizeOperaion\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFlickrMainMenuController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFlickrMainMenuController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFlickrMainMenuController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFlickrMainMenuController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFlickrManagedAccount");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFlickrManagedAccount\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFlickrManagedAccount");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFlickrManagedAccount\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFlickrMonitor");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFlickrMonitor\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFlickrMonitor");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFlickrMonitor\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFlickrParameters");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFlickrParameters\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFlickrParameters");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFlickrParameters\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFlickrParserDelegate");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFlickrParserDelegate\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFlickrParserDelegate");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFlickrParserDelegate\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFlickrProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFlickrProvider\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFlickrProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFlickrProvider\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFlickrProviderForAccount");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFlickrProviderForAccount\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFlickrProviderForAccount");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFlickrProviderForAccount\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFlickrProviderForCollection");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFlickrProviderForCollection\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFlickrProviderForCollection");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFlickrProviderForCollection\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFlickrProviderForSavedSearches");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFlickrProviderForSavedSearches\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFlickrProviderForSavedSearches");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFlickrProviderForSavedSearches\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFlickrSaveRemoveSearchSelectionHandler");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFlickrSaveRemoveSearchSelectionHandler\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFlickrSaveRemoveSearchSelectionHandler");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFlickrSaveRemoveSearchSelectionHandler\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFlickrSearchAgent");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFlickrSearchAgent\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFlickrSearchAgent");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFlickrSearchAgent\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFlickrURLFactory");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFlickrURLFactory\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFlickrURLFactory");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFlickrURLFactory\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVFullScreenPhotoBrowserController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVFullScreenPhotoBrowserController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVFullScreenPhotoBrowserController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVFullScreenPhotoBrowserController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVGameMenuItem");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVGameMenuItem\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVGameMenuItem");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVGameMenuItem\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVGameMenuItemContents");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVGameMenuItemContents\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVGameMenuItemContents");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVGameMenuItemContents\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVGameVersusPreview");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVGameVersusPreview\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVGameVersusPreview");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVGameVersusPreview\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVGridConfiguration");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVGridConfiguration\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVGridConfiguration");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVGridConfiguration\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVGridConfigurationEvaluator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVGridConfigurationEvaluator\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVGridConfigurationEvaluator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVGridConfigurationEvaluator\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVGridViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVGridViewController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVGridViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVGridViewController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVHIDSystemClient");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVHIDSystemClient\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVHIDSystemClient");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVHIDSystemClient\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVHIDThread");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVHIDThread\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVHIDThread");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVHIDThread\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVHSManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVHSManager\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVHSManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVHSManager\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVHandleStoreOfferAction");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVHandleStoreOfferAction\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVHandleStoreOfferAction");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVHandleStoreOfferAction\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVHeaderConfiguration");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVHeaderConfiguration\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVHeaderConfiguration");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVHeaderConfiguration\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVHeaderConfigurationEvaluator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVHeaderConfigurationEvaluator\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVHeaderConfigurationEvaluator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVHeaderConfigurationEvaluator\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVHistorySectionData");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVHistorySectionData\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVHistorySectionData");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVHistorySectionData\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVHomeShareAccountCreationController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVHomeShareAccountCreationController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVHomeShareAccountCreationController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVHomeShareAccountCreationController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVHomeShareAuthenticationResources");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVHomeShareAuthenticationResources\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVHomeShareAuthenticationResources");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVHomeShareAuthenticationResources\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVIPv4AddressEntryControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVIPv4AddressEntryControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVIPv4AddressEntryControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVIPv4AddressEntryControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVIPv4AddressSelectionControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVIPv4AddressSelectionControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVIPv4AddressSelectionControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVIPv4AddressSelectionControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVIPv4AddressSelectionWidget");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVIPv4AddressSelectionWidget\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVIPv4AddressSelectionWidget");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVIPv4AddressSelectionWidget\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVITunesFeedMerchant");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVITunesFeedMerchant\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVITunesFeedMerchant");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVITunesFeedMerchant\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVITunesMetricsUploader");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVITunesMetricsUploader\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVITunesMetricsUploader");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVITunesMetricsUploader\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVImageAndTextControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVImageAndTextControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVImageAndTextControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVImageAndTextControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVImageConfiguration");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVImageConfiguration\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVImageConfiguration");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVImageConfiguration\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVImageControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVImageControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVImageControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVImageControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVImageHeaderView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVImageHeaderView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVImageHeaderView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVImageHeaderView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVImageHeaderViewButton");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVImageHeaderViewButton\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVImageHeaderViewButton");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVImageHeaderViewButton\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVImageHeaderViewButtonsPanel");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVImageHeaderViewButtonsPanel\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVImageHeaderViewButtonsPanel");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVImageHeaderViewButtonsPanel\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVImageHeaderViewOverlay");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVImageHeaderViewOverlay\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVImageHeaderViewOverlay");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVImageHeaderViewOverlay\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVImagePosterDecorator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVImagePosterDecorator\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVImagePosterDecorator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVImagePosterDecorator\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVImagePreviewView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVImagePreviewView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVImagePreviewView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVImagePreviewView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVImageViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVImageViewController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVImageViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVImageViewController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVInstallableResourceManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVInstallableResourceManager\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVInstallableResourceManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVInstallableResourceManager\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVInternetPhotosAccount");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVInternetPhotosAccount\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVInternetPhotosAccount");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVInternetPhotosAccount\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVInternetPhotosCollection");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVInternetPhotosCollection\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVInternetPhotosCollection");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVInternetPhotosCollection\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVInternetPhotosMonitor");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVInternetPhotosMonitor\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVInternetPhotosMonitor");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVInternetPhotosMonitor\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVInternetRadioFavorite");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVInternetRadioFavorite\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVInternetRadioFavorite");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVInternetRadioFavorite\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVInterstitial");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVInterstitial\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVInterstitial");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVInterstitial\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVInterstitialGroup");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVInterstitialGroup\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVInterstitialGroup");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVInterstitialGroup\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVItemCollectionWithImageHeaderView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVItemCollectionWithImageHeaderView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVItemCollectionWithImageHeaderView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVItemCollectionWithImageHeaderView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVItemDetailView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVItemDetailView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVItemDetailView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVItemDetailView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVItemDetailWithImageHeaderBottomPart");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVItemDetailWithImageHeaderBottomPart\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVItemDetailWithImageHeaderBottomPart");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVItemDetailWithImageHeaderBottomPart\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVItemDetailWithImageHeaderTopPart");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVItemDetailWithImageHeaderTopPart\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVItemDetailWithImageHeaderTopPart");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVItemDetailWithImageHeaderTopPart\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVItemDetailWithImageHeaderView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVItemDetailWithImageHeaderView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVItemDetailWithImageHeaderView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVItemDetailWithImageHeaderView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVJSAnimationDelegate");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVJSAnimationDelegate\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVJSAnimationDelegate");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVJSAnimationDelegate\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVJSContext");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVJSContext\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVJSContext");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVJSContext\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVJSDOMUtils");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVJSDOMUtils\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVJSDOMUtils");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVJSDOMUtils\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVJSDOMView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVJSDOMView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVJSDOMView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVJSDOMView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVJSDataClient");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVJSDataClient\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVJSDataClient");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVJSDataClient\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVJSDataCollection");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVJSDataCollection\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVJSDataCollection");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVJSDataCollection\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVJSDataItem");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVJSDataItem\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVJSDataItem");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVJSDataItem\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVJSDocument");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVJSDocument\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVJSDocument");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVJSDocument\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVJSDocumentLoader");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVJSDocumentLoader\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVJSDocumentLoader");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVJSDocumentLoader\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVJSDocumentUpdator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVJSDocumentUpdator\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVJSDocumentUpdator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVJSDocumentUpdator\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVJSElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVJSElement\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVJSElement");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVJSElement\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVJSFullScreenMediaBrowserControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVJSFullScreenMediaBrowserControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVJSFullScreenMediaBrowserControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVJSFullScreenMediaBrowserControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVJSITunesSignInControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVJSITunesSignInControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVJSITunesSignInControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVJSITunesSignInControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVJSITunesStore");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVJSITunesStore\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVJSITunesStore");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVJSITunesStore\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVJSImageView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVJSImageView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVJSImageView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVJSImageView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVJSInvokeAction");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVJSInvokeAction\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVJSInvokeAction");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVJSInvokeAction\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVJSMediaToken");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVJSMediaToken\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVJSMediaToken");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVJSMediaToken\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVJSMediaTokenService");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVJSMediaTokenService\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVJSMediaTokenService");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVJSMediaTokenService\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVJSNSLocale");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVJSNSLocale\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVJSNSLocale");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVJSNSLocale\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVJSNode");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVJSNode\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVJSNode");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVJSNode\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVJSPageDocumentUpdating");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVJSPageDocumentUpdating\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVJSPageDocumentUpdating");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVJSPageDocumentUpdating\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVJSPlayer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVJSPlayer\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVJSPlayer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVJSPlayer\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVJSPlayerMoreAssetsSpinnerController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVJSPlayerMoreAssetsSpinnerController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVJSPlayerMoreAssetsSpinnerController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVJSPlayerMoreAssetsSpinnerController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVJSPopUpMenuControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVJSPopUpMenuControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVJSPopUpMenuControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVJSPopUpMenuControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVJSProxyDocument");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVJSProxyDocument\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVJSProxyDocument");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVJSProxyDocument\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVJSRoot");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVJSRoot\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVJSRoot");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVJSRoot\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVJSSKPaymentQueue");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVJSSKPaymentQueue\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVJSSKPaymentQueue");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVJSSKPaymentQueue\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVJSSKPaymentTransaction");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVJSSKPaymentTransaction\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVJSSKPaymentTransaction");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVJSSKPaymentTransaction\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVJSSKProduct");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVJSSKProduct\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVJSSKProduct");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVJSSKProduct\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVJSSKProductsRequest");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVJSSKProductsRequest\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVJSSKProductsRequest");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVJSSKProductsRequest\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVJSSKReceiptRefreshRequest");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVJSSKReceiptRefreshRequest\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVJSSKReceiptRefreshRequest");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVJSSKReceiptRefreshRequest\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVJSSSURLConnectionRequest");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVJSSSURLConnectionRequest\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVJSSSURLConnectionRequest");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVJSSSURLConnectionRequest\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVJSSSURLRequestProperties");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVJSSSURLRequestProperties\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVJSSSURLRequestProperties");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVJSSSURLRequestProperties\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVJSSlideShow");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVJSSlideShow\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVJSSlideShow");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVJSSlideShow\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVJSStorage");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVJSStorage\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVJSStorage");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVJSStorage\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVJSTextEntryControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVJSTextEntryControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVJSTextEntryControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVJSTextEntryControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVJSTextView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVJSTextView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVJSTextView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVJSTextView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVJSTimedMetadataOperation");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVJSTimedMetadataOperation\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVJSTimedMetadataOperation");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVJSTimedMetadataOperation\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVJSTimerContext");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVJSTimerContext\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVJSTimerContext");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVJSTimerContext\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVJSURLRequest");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVJSURLRequest\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVJSURLRequest");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVJSURLRequest\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVJSURLRequestProperties");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVJSURLRequestProperties\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVJSURLRequestProperties");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVJSURLRequestProperties\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVJSUserPasswordAuthenticator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVJSUserPasswordAuthenticator\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVJSUserPasswordAuthenticator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVJSUserPasswordAuthenticator\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVJSView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVJSView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVJSView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVJSView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVJSViewImpl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVJSViewImpl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVJSViewImpl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVJSViewImpl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVJSXMLHttpRequest");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVJSXMLHttpRequest\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVJSXMLHttpRequest");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVJSXMLHttpRequest\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVJSiCloudAuthContext");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVJSiCloudAuthContext\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVJSiCloudAuthContext");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVJSiCloudAuthContext\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVKeyValueStore");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVKeyValueStore\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVKeyValueStore");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVKeyValueStore\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVKeyValueStoreCleanupTask");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVKeyValueStoreCleanupTask\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVKeyValueStoreCleanupTask");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVKeyValueStoreCleanupTask\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVKeyValueStoreMigrator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVKeyValueStoreMigrator\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVKeyValueStoreMigrator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVKeyValueStoreMigrator\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVKeyValueStoreUtilities");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVKeyValueStoreUtilities\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVKeyValueStoreUtilities");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVKeyValueStoreUtilities\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVLanguageChooserController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVLanguageChooserController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVLanguageChooserController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVLanguageChooserController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVLikesBadgeView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVLikesBadgeView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVLikesBadgeView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVLikesBadgeView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVListByNavigationController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVListByNavigationController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVListByNavigationController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVListByNavigationController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVListItemLockupConfiguration");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVListItemLockupConfiguration\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVListItemLockupConfiguration");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVListItemLockupConfiguration\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVListItemLockupConfigurationEvaluator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVListItemLockupConfigurationEvaluator\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVListItemLockupConfigurationEvaluator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVListItemLockupConfigurationEvaluator\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVListPreviewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVListPreviewController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVListPreviewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVListPreviewController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVListTemplateController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVListTemplateController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVListTemplateController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVListTemplateController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVListTemplateView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVListTemplateView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVListTemplateView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVListTemplateView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVListViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVListViewController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVListViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVListViewController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVLoadRequiredURLsBehavior");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVLoadRequiredURLsBehavior\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVLoadRequiredURLsBehavior");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVLoadRequiredURLsBehavior\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVLoadURLAction");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVLoadURLAction\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVLoadURLAction");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVLoadURLAction\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVLocaleChooserController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVLocaleChooserController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVLocaleChooserController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVLocaleChooserController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVLockupConfiguration");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVLockupConfiguration\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVLockupConfiguration");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVLockupConfiguration\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVLockupConfigurationEvaluator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVLockupConfigurationEvaluator\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVLockupConfigurationEvaluator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVLockupConfigurationEvaluator\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMainMenuAnimationDelegate");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMainMenuAnimationDelegate\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMainMenuAnimationDelegate");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMainMenuAnimationDelegate\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMainMenuButton");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMainMenuButton\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMainMenuButton");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMainMenuButton\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMainMenuButtonGrid");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMainMenuButtonGrid\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMainMenuButtonGrid");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMainMenuButtonGrid\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMainMenuController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMainMenuController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMainMenuController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMainMenuController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMainTemplateController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMainTemplateController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMainTemplateController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMainTemplateController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMainTemplateView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMainTemplateView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMainTemplateView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMainTemplateView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMediaListWithImageHeaderControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMediaListWithImageHeaderControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMediaListWithImageHeaderControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMediaListWithImageHeaderControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMediaUtilities");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMediaUtilities\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMediaUtilities");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMediaUtilities\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMerchant");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMerchant\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMerchant");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMerchant\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMerchantAppliance");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMerchantAppliance\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMerchantAppliance");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMerchantAppliance\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMerchantCoordinator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMerchantCoordinator\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMerchantCoordinator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMerchantCoordinator\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMerchant_ITMS");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMerchant_ITMS\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMerchant_ITMS");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMerchant_ITMS\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMessage");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMessage\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMessage");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMessage\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMessageEntity");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMessageEntity\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMessageEntity");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMessageEntity\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMessageEntry");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMessageEntry\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMessageEntry");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMessageEntry\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMessageService");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMessageService\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMessageService");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMessageService\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMessagesDB");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMessagesDB\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMessagesDB");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMessagesDB\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMoreInfoAction");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMoreInfoAction\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMoreInfoAction");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMoreInfoAction\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMovieRentalPosterControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMovieRentalPosterControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMovieRentalPosterControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMovieRentalPosterControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMovieTrailersController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMovieTrailersController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMovieTrailersController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMovieTrailersController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMovieTrailersDetailController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMovieTrailersDetailController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMovieTrailersDetailController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMovieTrailersDetailController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMoviesAppliance");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMoviesAppliance\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMoviesAppliance");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMoviesAppliance\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMoviesPlayActionButtonControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMoviesPlayActionButtonControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMoviesPlayActionButtonControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMoviesPlayActionButtonControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMoviesTopShelfController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMoviesTopShelfController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMoviesTopShelfController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMoviesTopShelfController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMultistateProgressIndicator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMultistateProgressIndicator\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMultistateProgressIndicator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMultistateProgressIndicator\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMusicAppliance");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMusicAppliance\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMusicAppliance");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMusicAppliance\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMusicController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMusicController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMusicController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMusicController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMusicCoversCollection");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMusicCoversCollection\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMusicCoversCollection");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMusicCoversCollection\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMusicMerchant");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMusicMerchant\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMusicMerchant");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMusicMerchant\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMusicStoreAcquisitionController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMusicStoreAcquisitionController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMusicStoreAcquisitionController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMusicStoreAcquisitionController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMusicStoreActionControlPopulator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMusicStoreActionControlPopulator\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMusicStoreActionControlPopulator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMusicStoreActionControlPopulator\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMusicStoreAssetController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMusicStoreAssetController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMusicStoreAssetController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMusicStoreAssetController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMusicStoreAuthenticationResources");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMusicStoreAuthenticationResources\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMusicStoreAuthenticationResources");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMusicStoreAuthenticationResources\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMusicStoreBaseAppliance");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMusicStoreBaseAppliance\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMusicStoreBaseAppliance");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMusicStoreBaseAppliance\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMusicStoreBaseMetadataProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMusicStoreBaseMetadataProvider\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMusicStoreBaseMetadataProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMusicStoreBaseMetadataProvider\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMusicStoreCatalogAgent");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMusicStoreCatalogAgent\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMusicStoreCatalogAgent");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMusicStoreCatalogAgent\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMusicStoreCatalogCollectionController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMusicStoreCatalogCollectionController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMusicStoreCatalogCollectionController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMusicStoreCatalogCollectionController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMusicStoreCatalogItemController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMusicStoreCatalogItemController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMusicStoreCatalogItemController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMusicStoreCatalogItemController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMusicStoreCatalogItemProviderFactory");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMusicStoreCatalogItemProviderFactory\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMusicStoreCatalogItemProviderFactory");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMusicStoreCatalogItemProviderFactory\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMusicStoreCatalogRefreshTask");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMusicStoreCatalogRefreshTask\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMusicStoreCatalogRefreshTask");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMusicStoreCatalogRefreshTask\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMusicStoreControlFactory");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMusicStoreControlFactory\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMusicStoreControlFactory");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMusicStoreControlFactory\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMusicStoreControlPopulator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMusicStoreControlPopulator\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMusicStoreControlPopulator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMusicStoreControlPopulator\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMusicStoreDoubleRowPagedViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMusicStoreDoubleRowPagedViewController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMusicStoreDoubleRowPagedViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMusicStoreDoubleRowPagedViewController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMusicStoreExtrasSelectionHandler");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMusicStoreExtrasSelectionHandler\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMusicStoreExtrasSelectionHandler");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMusicStoreExtrasSelectionHandler\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMusicStoreFavoriteListItemProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMusicStoreFavoriteListItemProvider\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMusicStoreFavoriteListItemProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMusicStoreFavoriteListItemProvider\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMusicStoreItemDetailController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMusicStoreItemDetailController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMusicStoreItemDetailController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMusicStoreItemDetailController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMusicStoreItemProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMusicStoreItemProvider\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMusicStoreItemProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMusicStoreItemProvider\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMusicStoreJaliscoProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMusicStoreJaliscoProvider\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMusicStoreJaliscoProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMusicStoreJaliscoProvider\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMusicStoreMoreInfoControlPopulator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMusicStoreMoreInfoControlPopulator\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMusicStoreMoreInfoControlPopulator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMusicStoreMoreInfoControlPopulator\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMusicStoreMoreInfoController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMusicStoreMoreInfoController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMusicStoreMoreInfoController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMusicStoreMoreInfoController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMusicStoreMoreInfoProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMusicStoreMoreInfoProvider\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMusicStoreMoreInfoProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMusicStoreMoreInfoProvider\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMusicStoreMoreInfoSelectionHandler");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMusicStoreMoreInfoSelectionHandler\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMusicStoreMoreInfoSelectionHandler");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMusicStoreMoreInfoSelectionHandler\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMusicStoreMovieItemController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMusicStoreMovieItemController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMusicStoreMovieItemController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMusicStoreMovieItemController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMusicStoreMovieMetadataProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMusicStoreMovieMetadataProvider\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMusicStoreMovieMetadataProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMusicStoreMovieMetadataProvider\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMusicStoreMoviePreviewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMusicStoreMoviePreviewController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMusicStoreMoviePreviewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMusicStoreMoviePreviewController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMusicStoreMusicAlbumMetadataProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMusicStoreMusicAlbumMetadataProvider\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMusicStoreMusicAlbumMetadataProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMusicStoreMusicAlbumMetadataProvider\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMusicStoreMusicItemController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMusicStoreMusicItemController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMusicStoreMusicItemController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMusicStoreMusicItemController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMusicStoreMusicMetadataProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMusicStoreMusicMetadataProvider\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMusicStoreMusicMetadataProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMusicStoreMusicMetadataProvider\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMusicStoreMusicVideoMetadataProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMusicStoreMusicVideoMetadataProvider\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMusicStoreMusicVideoMetadataProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMusicStoreMusicVideoMetadataProvider\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMusicStoreMyRentedMoviesController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMusicStoreMyRentedMoviesController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMusicStoreMyRentedMoviesController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMusicStoreMyRentedMoviesController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMusicStoreOffer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMusicStoreOffer\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMusicStoreOffer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMusicStoreOffer\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMusicStoreOfferControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMusicStoreOfferControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMusicStoreOfferControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMusicStoreOfferControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMusicStoreOfferControlFactory");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMusicStoreOfferControlFactory\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMusicStoreOfferControlFactory");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMusicStoreOfferControlFactory\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMusicStoreOneUpViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMusicStoreOneUpViewController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMusicStoreOneUpViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMusicStoreOneUpViewController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMusicStoreOtherSeasonsControlFactory");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMusicStoreOtherSeasonsControlFactory\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMusicStoreOtherSeasonsControlFactory");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMusicStoreOtherSeasonsControlFactory\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMusicStoreOtherSeasonsProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMusicStoreOtherSeasonsProvider\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMusicStoreOtherSeasonsProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMusicStoreOtherSeasonsProvider\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMusicStoreOtherSeasonsSelectionHandler");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMusicStoreOtherSeasonsSelectionHandler\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMusicStoreOtherSeasonsSelectionHandler");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMusicStoreOtherSeasonsSelectionHandler\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMusicStorePagedViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMusicStorePagedViewController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMusicStorePagedViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMusicStorePagedViewController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMusicStorePodcastAsset");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMusicStorePodcastAsset\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMusicStorePodcastAsset");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMusicStorePodcastAsset\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMusicStorePodcastItemController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMusicStorePodcastItemController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMusicStorePodcastItemController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMusicStorePodcastItemController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMusicStorePodcastMetadataProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMusicStorePodcastMetadataProvider\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMusicStorePodcastMetadataProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMusicStorePodcastMetadataProvider\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMusicStorePodcastShowMetadataProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMusicStorePodcastShowMetadataProvider\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMusicStorePodcastShowMetadataProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMusicStorePodcastShowMetadataProvider\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMusicStorePresentsItemControlPopulator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMusicStorePresentsItemControlPopulator\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMusicStorePresentsItemControlPopulator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMusicStorePresentsItemControlPopulator\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMusicStorePresentsProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMusicStorePresentsProvider\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMusicStorePresentsProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMusicStorePresentsProvider\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMusicStoreRadioLinkControlFactory");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMusicStoreRadioLinkControlFactory\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMusicStoreRadioLinkControlFactory");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMusicStoreRadioLinkControlFactory\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMusicStoreRadioLinkProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMusicStoreRadioLinkProvider\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMusicStoreRadioLinkProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMusicStoreRadioLinkProvider\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMusicStoreRadioLinkSelectionHandler");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMusicStoreRadioLinkSelectionHandler\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMusicStoreRadioLinkSelectionHandler");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMusicStoreRadioLinkSelectionHandler\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMusicStoreRentalDetailPageController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMusicStoreRentalDetailPageController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMusicStoreRentalDetailPageController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMusicStoreRentalDetailPageController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMusicStoreRottenTomatoesControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMusicStoreRottenTomatoesControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMusicStoreRottenTomatoesControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMusicStoreRottenTomatoesControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMusicStoreRottenTomatoesRatingControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMusicStoreRottenTomatoesRatingControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMusicStoreRottenTomatoesRatingControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMusicStoreRottenTomatoesRatingControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMusicStoreScreenshotSelectionHandler");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMusicStoreScreenshotSelectionHandler\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMusicStoreScreenshotSelectionHandler");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMusicStoreScreenshotSelectionHandler\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMusicStoreScrollerDataSource");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMusicStoreScrollerDataSource\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMusicStoreScrollerDataSource");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMusicStoreScrollerDataSource\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMusicStoreSearchAgent");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMusicStoreSearchAgent\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMusicStoreSearchAgent");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMusicStoreSearchAgent\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMusicStoreSearchController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMusicStoreSearchController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMusicStoreSearchController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMusicStoreSearchController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMusicStoreShowInfo");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMusicStoreShowInfo\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMusicStoreShowInfo");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMusicStoreShowInfo\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMusicStoreSingleItemPopulator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMusicStoreSingleItemPopulator\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMusicStoreSingleItemPopulator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMusicStoreSingleItemPopulator\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMusicStoreSingleRowPagedViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMusicStoreSingleRowPagedViewController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMusicStoreSingleRowPagedViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMusicStoreSingleRowPagedViewController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMusicStoreTVEpisodeItemController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMusicStoreTVEpisodeItemController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMusicStoreTVEpisodeItemController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMusicStoreTVEpisodeItemController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMusicStoreTVMetadataProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMusicStoreTVMetadataProvider\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMusicStoreTVMetadataProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMusicStoreTVMetadataProvider\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMusicStoreTVSeasonMetadataProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMusicStoreTVSeasonMetadataProvider\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMusicStoreTVSeasonMetadataProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMusicStoreTVSeasonMetadataProvider\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMusicStoreTabManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMusicStoreTabManager\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMusicStoreTabManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMusicStoreTabManager\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMusicStoreTabbedPageController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMusicStoreTabbedPageController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMusicStoreTabbedPageController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMusicStoreTabbedPageController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMusicStoreUberArtworkConfig");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMusicStoreUberArtworkConfig\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMusicStoreUberArtworkConfig");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMusicStoreUberArtworkConfig\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMusicStoreUberConfig");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMusicStoreUberConfig\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMusicStoreUberConfig");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMusicStoreUberConfig\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMusicStoreUserReviewsControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMusicStoreUserReviewsControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMusicStoreUserReviewsControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMusicStoreUserReviewsControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVMusicTopShelfController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVMusicTopShelfController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVMusicTopShelfController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVMusicTopShelfController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVNameToClassMapper");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVNameToClassMapper\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVNameToClassMapper");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVNameToClassMapper\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVNativeMerchant");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVNativeMerchant\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVNativeMerchant");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVNativeMerchant\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVNavigationBar");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVNavigationBar\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVNavigationBar");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVNavigationBar\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVNavigationBarController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVNavigationBarController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVNavigationBarController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVNavigationBarController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVNavigationBarPresentationView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVNavigationBarPresentationView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVNavigationBarPresentationView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVNavigationBarPresentationView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVNavigationItemController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVNavigationItemController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVNavigationItemController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVNavigationItemController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVNetflixMediaCloseRequest");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVNetflixMediaCloseRequest\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVNetflixMediaCloseRequest");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVNetflixMediaCloseRequest\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVNetflixMediaOpenRequest");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVNetflixMediaOpenRequest\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVNetflixMediaOpenRequest");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVNetflixMediaOpenRequest\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVNetworkStatisticsMonitor");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVNetworkStatisticsMonitor\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVNetworkStatisticsMonitor");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVNetworkStatisticsMonitor\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVNewFeaturesController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVNewFeaturesController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVNewFeaturesController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVNewFeaturesController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVNormalizedSizeValue");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVNormalizedSizeValue\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVNormalizedSizeValue");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVNormalizedSizeValue\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVNumUserReviewsTransformer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVNumUserReviewsTransformer\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVNumUserReviewsTransformer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVNumUserReviewsTransformer\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVOAuth2Account");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVOAuth2Account\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVOAuth2Account");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVOAuth2Account\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVOAuth2Authenticator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVOAuth2Authenticator\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVOAuth2Authenticator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVOAuth2Authenticator\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVOAuth2DPAuthenticationController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVOAuth2DPAuthenticationController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVOAuth2DPAuthenticationController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVOAuth2DPAuthenticationController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVOAuth2DPAuthenticator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVOAuth2DPAuthenticator\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVOAuth2DPAuthenticator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVOAuth2DPAuthenticator\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVOAuth2TokenResponse");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVOAuth2TokenResponse\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVOAuth2TokenResponse");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVOAuth2TokenResponse\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVOneupViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVOneupViewController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVOneupViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVOneupViewController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVOptionListController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVOptionListController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVOptionListController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVOptionListController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVPINController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVPINController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVPINController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVPINController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVPagedGridViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVPagedGridViewController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVPagedGridViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVPagedGridViewController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVPeriodicItemUpdateTask");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVPeriodicItemUpdateTask\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVPeriodicItemUpdateTask");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVPeriodicItemUpdateTask\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVPhotoBatchBrowserView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVPhotoBatchBrowserView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVPhotoBatchBrowserView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVPhotoBatchBrowserView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVPhotoBatchCarouselViewUIDelegate");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVPhotoBatchCarouselViewUIDelegate\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVPhotoBatchCarouselViewUIDelegate");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVPhotoBatchCarouselViewUIDelegate\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVPhotoBatchDescriptionView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVPhotoBatchDescriptionView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVPhotoBatchDescriptionView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVPhotoBatchDescriptionView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVPhotoBatchView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVPhotoBatchView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVPhotoBatchView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVPhotoBatchView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVPhotoBrowserView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVPhotoBrowserView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVPhotoBrowserView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVPhotoBrowserView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVPhotoCarouselViewUIDelegateCommentsImpl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVPhotoCarouselViewUIDelegateCommentsImpl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVPhotoCarouselViewUIDelegateCommentsImpl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVPhotoCarouselViewUIDelegateCommentsImpl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVPhotoCarouselViewUIDelegateFullScreenImpl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVPhotoCarouselViewUIDelegateFullScreenImpl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVPhotoCarouselViewUIDelegateFullScreenImpl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVPhotoCarouselViewUIDelegateFullScreenImpl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVPhotoCarouselViewUIDelegateItem");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVPhotoCarouselViewUIDelegateItem\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVPhotoCarouselViewUIDelegateItem");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVPhotoCarouselViewUIDelegateItem\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVPhotoCarouselViewUIDelegateTransitionImpl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVPhotoCarouselViewUIDelegateTransitionImpl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVPhotoCarouselViewUIDelegateTransitionImpl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVPhotoCarouselViewUIDelegateTransitionImpl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVPhotoCommentCountBadgeView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVPhotoCommentCountBadgeView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVPhotoCommentCountBadgeView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVPhotoCommentCountBadgeView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVPhotoDetailView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVPhotoDetailView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVPhotoDetailView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVPhotoDetailView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVPhotoFullScreenView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVPhotoFullScreenView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVPhotoFullScreenView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVPhotoFullScreenView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVPhotoMetadataCommentView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVPhotoMetadataCommentView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVPhotoMetadataCommentView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVPhotoMetadataCommentView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVPhotoMetadataHeaderView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVPhotoMetadataHeaderView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVPhotoMetadataHeaderView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVPhotoMetadataHeaderView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVPhotoMetadataViewConfigurator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVPhotoMetadataViewConfigurator\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVPhotoMetadataViewConfigurator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVPhotoMetadataViewConfigurator\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVPhotoPlayerSwapView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVPhotoPlayerSwapView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVPhotoPlayerSwapView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVPhotoPlayerSwapView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVPhotoPlayerSwapViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVPhotoPlayerSwapViewController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVPhotoPlayerSwapViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVPhotoPlayerSwapViewController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVPhotoSwapView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVPhotoSwapView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVPhotoSwapView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVPhotoSwapView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVPillView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVPillView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVPillView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVPillView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVPingAction");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVPingAction\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVPingAction");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVPingAction\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVPlayButtonEnabledButtonControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVPlayButtonEnabledButtonControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVPlayButtonEnabledButtonControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVPlayButtonEnabledButtonControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVPlayItemAction");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVPlayItemAction\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVPlayItemAction");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVPlayItemAction\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVPlayQueue");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVPlayQueue\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVPlayQueue");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVPlayQueue\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVPlaybackAirPlayCRABSProgressMonitor");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVPlaybackAirPlayCRABSProgressMonitor\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVPlaybackAirPlayCRABSProgressMonitor");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVPlaybackAirPlayCRABSProgressMonitor\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVPlaybackAirPlayHLSProgressMonitor");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVPlaybackAirPlayHLSProgressMonitor\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVPlaybackAirPlayHLSProgressMonitor");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVPlaybackAirPlayHLSProgressMonitor\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVPlaybackITMSProgressMonitor");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVPlaybackITMSProgressMonitor\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVPlaybackITMSProgressMonitor");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVPlaybackITMSProgressMonitor\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVPlaybackProgressMonitor");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVPlaybackProgressMonitor\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVPlaybackProgressMonitor");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVPlaybackProgressMonitor\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVPlaybackRadioProgressMonitor");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVPlaybackRadioProgressMonitor\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVPlaybackRadioProgressMonitor");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVPlaybackRadioProgressMonitor\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVPlaybackSedonaProgressMonitor");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVPlaybackSedonaProgressMonitor\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVPlaybackSedonaProgressMonitor");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVPlaybackSedonaProgressMonitor\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVPlaybackStreamingProgressMonitor");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVPlaybackStreamingProgressMonitor\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVPlaybackStreamingProgressMonitor");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVPlaybackStreamingProgressMonitor\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVPlayerEventDisplayControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVPlayerEventDisplayControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVPlayerEventDisplayControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVPlayerEventDisplayControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVPodcastEmptyControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVPodcastEmptyControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVPodcastEmptyControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVPodcastEmptyControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVPodcastFavorite");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVPodcastFavorite\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVPodcastFavorite");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVPodcastFavorite\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVPodcastFilteredStationController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVPodcastFilteredStationController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVPodcastFilteredStationController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVPodcastFilteredStationController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVPodcastManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVPodcastManager\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVPodcastManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVPodcastManager\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVPodcastMetadataBookmarkKey");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVPodcastMetadataBookmarkKey\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVPodcastMetadataBookmarkKey");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVPodcastMetadataBookmarkKey\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVPodcastShowAllSelectionHandler");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVPodcastShowAllSelectionHandler\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVPodcastShowAllSelectionHandler");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVPodcastShowAllSelectionHandler\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVPodcastStationController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVPodcastStationController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVPodcastStationController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVPodcastStationController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVPodcastStationsController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVPodcastStationsController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVPodcastStationsController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVPodcastStationsController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVPodcastSubscriptionSelectionHandler");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVPodcastSubscriptionSelectionHandler\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVPodcastSubscriptionSelectionHandler");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVPodcastSubscriptionSelectionHandler\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVPowerManagementObserver");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVPowerManagementObserver\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVPowerManagementObserver");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVPowerManagementObserver\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVPreProcessDocumentBehavior");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVPreProcessDocumentBehavior\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVPreProcessDocumentBehavior");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVPreProcessDocumentBehavior\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVPreferenceFeedResource");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVPreferenceFeedResource\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVPreferenceFeedResource");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVPreferenceFeedResource\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVPreferredVideoFormatEvaluation");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVPreferredVideoFormatEvaluation\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVPreferredVideoFormatEvaluation");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVPreferredVideoFormatEvaluation\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVPrivacyWelcomeController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVPrivacyWelcomeController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVPrivacyWelcomeController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVPrivacyWelcomeController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVPrivacyWelcomeHeader");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVPrivacyWelcomeHeader\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVPrivacyWelcomeHeader");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVPrivacyWelcomeHeader\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVPrivacyWelcomeManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVPrivacyWelcomeManager\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVPrivacyWelcomeManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVPrivacyWelcomeManager\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVPrivacyWelcomeSelectionHandler");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVPrivacyWelcomeSelectionHandler\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVPrivacyWelcomeSelectionHandler");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVPrivacyWelcomeSelectionHandler\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVProgressBarContainerControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVProgressBarContainerControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVProgressBarContainerControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVProgressBarContainerControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVProgressBarView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVProgressBarView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVProgressBarView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVProgressBarView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVProxyViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVProxyViewController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVProxyViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVProxyViewController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVQualityOfServiceInfo");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVQualityOfServiceInfo\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVQualityOfServiceInfo");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVQualityOfServiceInfo\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVQualityOfServiceSample");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVQualityOfServiceSample\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVQualityOfServiceSample");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVQualityOfServiceSample\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVRCButtonPatternSet");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVRCButtonPatternSet\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVRCButtonPatternSet");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVRCButtonPatternSet\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVRCCapture");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVRCCapture\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVRCCapture");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVRCCapture\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVRCManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVRCManager\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVRCManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVRCManager\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVRCPatternMatcher");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVRCPatternMatcher\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVRCPatternMatcher");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVRCPatternMatcher\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVRadioAdItem");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVRadioAdItem\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVRadioAdItem");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVRadioAdItem\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVRadioAdSlot");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVRadioAdSlot\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVRadioAdSlot");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVRadioAdSlot\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVRadioAdSlotFetchContext");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVRadioAdSlotFetchContext\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVRadioAdSlotFetchContext");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVRadioAdSlotFetchContext\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVRadioAddController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVRadioAddController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVRadioAddController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVRadioAddController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVRadioAlbumOfferActionButtonControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVRadioAlbumOfferActionButtonControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVRadioAlbumOfferActionButtonControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVRadioAlbumOfferActionButtonControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVRadioBadgeBackgroundImageControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVRadioBadgeBackgroundImageControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVRadioBadgeBackgroundImageControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVRadioBadgeBackgroundImageControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVRadioButtonControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVRadioButtonControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVRadioButtonControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVRadioButtonControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVRadioClipItem");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVRadioClipItem\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVRadioClipItem");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVRadioClipItem\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVRadioConnectionController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVRadioConnectionController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVRadioConnectionController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVRadioConnectionController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVRadioCreateStationController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVRadioCreateStationController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVRadioCreateStationController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVRadioCreateStationController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVRadioDataClient");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVRadioDataClient\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVRadioDataClient");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVRadioDataClient\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVRadioEditViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVRadioEditViewController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVRadioEditViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVRadioEditViewController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVRadioHeaderWithTabControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVRadioHeaderWithTabControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVRadioHeaderWithTabControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVRadioHeaderWithTabControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVRadioHistoryController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVRadioHistoryController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVRadioHistoryController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVRadioHistoryController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVRadioHistoryDataSource");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVRadioHistoryDataSource\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVRadioHistoryDataSource");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVRadioHistoryDataSource\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVRadioHistoryItem");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVRadioHistoryItem\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVRadioHistoryItem");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVRadioHistoryItem\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVRadioItem");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVRadioItem\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVRadioItem");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVRadioItem\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVRadioMetricsController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVRadioMetricsController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVRadioMetricsController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVRadioMetricsController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVRadioMetricsEventFieldProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVRadioMetricsEventFieldProvider\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVRadioMetricsEventFieldProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVRadioMetricsEventFieldProvider\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVRadioMonitor");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVRadioMonitor\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVRadioMonitor");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVRadioMonitor\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVRadioNPAdView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVRadioNPAdView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVRadioNPAdView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVRadioNPAdView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVRadioNPHistoryView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVRadioNPHistoryView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVRadioNPHistoryView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVRadioNPHistoryView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVRadioNPTrackInfoView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVRadioNPTrackInfoView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVRadioNPTrackInfoView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVRadioNPTrackInfoView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVRadioNPTrackView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVRadioNPTrackView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVRadioNPTrackView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVRadioNPTrackView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVRadioNPTransitioningController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVRadioNPTransitioningController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVRadioNPTransitioningController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVRadioNPTransitioningController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVRadioNPTransportView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVRadioNPTransportView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVRadioNPTransportView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVRadioNPTransportView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVRadioNPView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVRadioNPView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVRadioNPView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVRadioNPView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVRadioNavigationBarController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVRadioNavigationBarController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVRadioNavigationBarController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVRadioNavigationBarController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVRadioPlayEvent");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVRadioPlayEvent\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVRadioPlayEvent");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVRadioPlayEvent\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVRadioPlayer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVRadioPlayer\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVRadioPlayer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVRadioPlayer\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVRadioPlayerVideoView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVRadioPlayerVideoView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVRadioPlayerVideoView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVRadioPlayerVideoView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVRadioPlayerViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVRadioPlayerViewController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVRadioPlayerViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVRadioPlayerViewController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVRadioScreenSaverInterstitials");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVRadioScreenSaverInterstitials\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVRadioScreenSaverInterstitials");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVRadioScreenSaverInterstitials\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVRadioScrollContentControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVRadioScrollContentControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVRadioScrollContentControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVRadioScrollContentControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVRadioSearchResults");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVRadioSearchResults\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVRadioSearchResults");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVRadioSearchResults\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVRadioSearchResultsSection");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVRadioSearchResultsSection\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVRadioSearchResultsSection");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVRadioSearchResultsSection\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVRadioSkipLimiter");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVRadioSkipLimiter\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVRadioSkipLimiter");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVRadioSkipLimiter\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVRadioStation");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVRadioStation\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVRadioStation");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVRadioStation\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVRadioStationControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVRadioStationControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVRadioStationControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVRadioStationControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVRadioStationEditController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVRadioStationEditController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVRadioStationEditController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVRadioStationEditController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVRadioStationImageLoader");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVRadioStationImageLoader\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVRadioStationImageLoader");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVRadioStationImageLoader\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVRadioStationPreviewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVRadioStationPreviewController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVRadioStationPreviewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVRadioStationPreviewController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVRadioStationPreviewMetadataView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVRadioStationPreviewMetadataView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVRadioStationPreviewMetadataView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVRadioStationPreviewMetadataView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVRadioStationPreviewView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVRadioStationPreviewView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVRadioStationPreviewView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVRadioStationPreviewView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVRadioStationsController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVRadioStationsController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVRadioStationsController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVRadioStationsController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVRadioStationsDataSource");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVRadioStationsDataSource\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVRadioStationsDataSource");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVRadioStationsDataSource\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVRadioStationsView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVRadioStationsView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVRadioStationsView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVRadioStationsView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVRadioStoreGenreController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVRadioStoreGenreController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVRadioStoreGenreController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVRadioStoreGenreController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVRadioStreamingItem");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVRadioStreamingItem\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVRadioStreamingItem");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVRadioStreamingItem\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVRadioSyncRequest");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVRadioSyncRequest\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVRadioSyncRequest");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVRadioSyncRequest\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVRadioTopShelfController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVRadioTopShelfController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVRadioTopShelfController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVRadioTopShelfController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVRadioTopShelfLogoView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVRadioTopShelfLogoView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVRadioTopShelfLogoView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVRadioTopShelfLogoView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVRadioUtilites");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVRadioUtilites\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVRadioUtilites");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVRadioUtilites\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVRadioVisualEngagementController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVRadioVisualEngagementController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVRadioVisualEngagementController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVRadioVisualEngagementController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVRadioWishListDataSource");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVRadioWishListDataSource\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVRadioWishListDataSource");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVRadioWishListDataSource\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVRateControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVRateControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVRateControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVRateControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVRebootWaitController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVRebootWaitController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVRebootWaitController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVRebootWaitController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVRecentSearchSelectionHandler");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVRecentSearchSelectionHandler\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVRecentSearchSelectionHandler");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVRecentSearchSelectionHandler\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVRecentSearchesController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVRecentSearchesController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVRecentSearchesController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVRecentSearchesController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVRedDotCachingTask");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVRedDotCachingTask\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVRedDotCachingTask");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVRedDotCachingTask\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVRelatedPlaybackPlayerGlow");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVRelatedPlaybackPlayerGlow\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVRelatedPlaybackPlayerGlow");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVRelatedPlaybackPlayerGlow\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVRelatedPlaybackVideoView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVRelatedPlaybackVideoView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVRelatedPlaybackVideoView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVRelatedPlaybackVideoView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVRelatedPlaybackView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVRelatedPlaybackView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVRelatedPlaybackView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVRelatedPlaybackView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVRelatedPlaybackViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVRelatedPlaybackViewController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVRelatedPlaybackViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVRelatedPlaybackViewController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVReleaseDateAsInTheatersDateValueTransformer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVReleaseDateAsInTheatersDateValueTransformer\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVReleaseDateAsInTheatersDateValueTransformer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVReleaseDateAsInTheatersDateValueTransformer\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVReleaseDateAsOriginalAirDateValueTransformer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVReleaseDateAsOriginalAirDateValueTransformer\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVReleaseDateAsOriginalAirDateValueTransformer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVReleaseDateAsOriginalAirDateValueTransformer\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVReleaseDateAsReleasedDateValueTransformer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVReleaseDateAsReleasedDateValueTransformer\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVReleaseDateAsReleasedDateValueTransformer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVReleaseDateAsReleasedDateValueTransformer\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVReleaseDateAsYearValueTransformer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVReleaseDateAsYearValueTransformer\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVReleaseDateAsYearValueTransformer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVReleaseDateAsYearValueTransformer\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVRemoteControlMessageHandler");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVRemoteControlMessageHandler\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVRemoteControlMessageHandler");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVRemoteControlMessageHandler\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVRemoteImageCacher");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVRemoteImageCacher\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVRemoteImageCacher");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVRemoteImageCacher\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVRemoteSet");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVRemoteSet\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVRemoteSet");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVRemoteSet\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVRentalExpiryUserNotification");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVRentalExpiryUserNotification\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVRentalExpiryUserNotification");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVRentalExpiryUserNotification\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVRentalPosterControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVRentalPosterControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVRentalPosterControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVRentalPosterControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVRentedMediaProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVRentedMediaProvider\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVRentedMediaProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVRentedMediaProvider\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVResourceImageLoader");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVResourceImageLoader\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVResourceImageLoader");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVResourceImageLoader\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVResourceImageProxy");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVResourceImageProxy\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVResourceImageProxy");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVResourceImageProxy\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVResourceImageRequest");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVResourceImageRequest\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVResourceImageRequest");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVResourceImageRequest\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVResourceLookupBehavior");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVResourceLookupBehavior\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVResourceLookupBehavior");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVResourceLookupBehavior\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVRetailDemoModeManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVRetailDemoModeManager\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVRetailDemoModeManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVRetailDemoModeManager\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVRoundProgressView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVRoundProgressView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVRoundProgressView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVRoundProgressView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVRoute");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVRoute\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVRoute");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVRoute\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVSWUAutoApplyController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVSWUAutoApplyController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVSWUAutoApplyController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVSWUAutoApplyController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVSWUChecker");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVSWUChecker\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVSWUChecker");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVSWUChecker\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVSWUDiagnosticMonitor");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVSWUDiagnosticMonitor\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVSWUDiagnosticMonitor");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVSWUDiagnosticMonitor\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVSWUDownloadController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVSWUDownloadController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVSWUDownloadController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVSWUDownloadController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVSWUProgressView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVSWUProgressView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVSWUProgressView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVSWUProgressView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVSWURedownloadController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVSWURedownloadController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVSWURedownloadController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVSWURedownloadController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVSWUSlowUpdateRebootController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVSWUSlowUpdateRebootController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVSWUSlowUpdateRebootController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVSWUSlowUpdateRebootController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVSWUpdateCheckTask");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVSWUpdateCheckTask\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVSWUpdateCheckTask");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVSWUpdateCheckTask\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVSWUpdateDirector");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVSWUpdateDirector\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVSWUpdateDirector");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVSWUpdateDirector\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVSWUpdateEngine");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVSWUpdateEngine\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVSWUpdateEngine");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVSWUpdateEngine\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVScreenSaverArchiver");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVScreenSaverArchiver\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVScreenSaverArchiver");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVScreenSaverArchiver\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVScreenSaverControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVScreenSaverControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVScreenSaverControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVScreenSaverControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVScreenSaverManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVScreenSaverManager\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVScreenSaverManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVScreenSaverManager\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVScreenSaverPrefetchTask");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVScreenSaverPrefetchTask\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVScreenSaverPrefetchTask");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVScreenSaverPrefetchTask\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVScreenSaverTheme");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVScreenSaverTheme\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVScreenSaverTheme");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVScreenSaverTheme\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVScriptRunnerController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVScriptRunnerController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVScriptRunnerController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVScriptRunnerController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVScriptViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVScriptViewController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVScriptViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVScriptViewController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVScrollFade");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVScrollFade\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVScrollFade");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVScrollFade\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVScrollingCommentsView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVScrollingCommentsView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVScrollingCommentsView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVScrollingCommentsView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVSearchAgent");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVSearchAgent\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVSearchAgent");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVSearchAgent\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVSearchController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVSearchController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVSearchController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVSearchController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVSearchTerm");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVSearchTerm\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVSearchTerm");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVSearchTerm\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVSearchView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVSearchView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVSearchView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVSearchView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVSearchViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVSearchViewController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVSearchViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVSearchViewController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVSearchViewPreview");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVSearchViewPreview\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVSearchViewPreview");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVSearchViewPreview\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVSedonaAccount");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVSedonaAccount\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVSedonaAccount");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVSedonaAccount\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVSedonaAuthenticationResources");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVSedonaAuthenticationResources\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVSedonaAuthenticationResources");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVSedonaAuthenticationResources\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVSedonaAuthenticator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVSedonaAuthenticator\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVSedonaAuthenticator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVSedonaAuthenticator\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVSedonaController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVSedonaController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVSedonaController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVSedonaController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVSedonaMediaAPIHelper");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVSedonaMediaAPIHelper\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVSedonaMediaAPIHelper");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVSedonaMediaAPIHelper\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVSedonaMediaAsset");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVSedonaMediaAsset\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVSedonaMediaAsset");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVSedonaMediaAsset\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVSedonaMerchant");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVSedonaMerchant\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVSedonaMerchant");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVSedonaMerchant\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVServerArtworkRequest");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVServerArtworkRequest\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVServerArtworkRequest");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVServerArtworkRequest\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVServerArtworkRequestManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVServerArtworkRequestManager\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVServerArtworkRequestManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVServerArtworkRequestManager\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVServerDAAPRequestHandler");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVServerDAAPRequestHandler\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVServerDAAPRequestHandler");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVServerDAAPRequestHandler\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVServerDACPRequestHandler");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVServerDACPRequestHandler\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVServerDACPRequestHandler");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVServerDACPRequestHandler\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVServerInfoResponse");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVServerInfoResponse\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVServerInfoResponse");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVServerInfoResponse\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVServerRequestHandler");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVServerRequestHandler\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVServerRequestHandler");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVServerRequestHandler\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVServerUtilites");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVServerUtilites\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVServerUtilites");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVServerUtilites\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVSetPreferenceAction");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVSetPreferenceAction\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVSetPreferenceAction");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVSetPreferenceAction\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVSettingsFacade");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVSettingsFacade\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVSettingsFacade");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVSettingsFacade\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVSettingsMigrator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVSettingsMigrator\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVSettingsMigrator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVSettingsMigrator\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVSetupTextController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVSetupTextController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVSetupTextController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVSetupTextController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVSharedCredentialsAuthenticationController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVSharedCredentialsAuthenticationController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVSharedCredentialsAuthenticationController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVSharedCredentialsAuthenticationController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVSharedCredentialsAuthenticator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVSharedCredentialsAuthenticator\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVSharedCredentialsAuthenticator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVSharedCredentialsAuthenticator\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVShelfListView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVShelfListView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVShelfListView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVShelfListView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVShelfViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVShelfViewController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVShelfViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVShelfViewController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVShowInfoFetchKey");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVShowInfoFetchKey\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVShowInfoFetchKey");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVShowInfoFetchKey\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVShowcaseDescriptionView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVShowcaseDescriptionView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVShowcaseDescriptionView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVShowcaseDescriptionView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVShowcaseModeContext");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVShowcaseModeContext\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVShowcaseModeContext");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVShowcaseModeContext\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVShowcaseTemplateController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVShowcaseTemplateController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVShowcaseTemplateController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVShowcaseTemplateController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVShowcaseTemplateCoverflowView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVShowcaseTemplateCoverflowView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVShowcaseTemplateCoverflowView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVShowcaseTemplateCoverflowView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVShowcaseTemplateOneupView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVShowcaseTemplateOneupView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVShowcaseTemplateOneupView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVShowcaseTemplateOneupView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVShowcaseTemplateView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVShowcaseTemplateView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVShowcaseTemplateView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVShowcaseTemplateView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVShowcaseTemplateViewContainer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVShowcaseTemplateViewContainer\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVShowcaseTemplateViewContainer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVShowcaseTemplateViewContainer\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVShowcaseTransitioningController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVShowcaseTransitioningController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVShowcaseTransitioningController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVShowcaseTransitioningController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVShowcaseTransitioningView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVShowcaseTransitioningView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVShowcaseTransitioningView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVShowcaseTransitioningView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVShowcaseView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVShowcaseView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVShowcaseView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVShowcaseView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVSignInSignOutMenuItem");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVSignInSignOutMenuItem\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVSignInSignOutMenuItem");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVSignInSignOutMenuItem\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVSingleCommentView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVSingleCommentView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVSingleCommentView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVSingleCommentView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVSliderMenuItemView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVSliderMenuItemView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVSliderMenuItemView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVSliderMenuItemView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVSlideshowPlaylistController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVSlideshowPlaylistController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVSlideshowPlaylistController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVSlideshowPlaylistController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVSnapScrollPointAdjuster");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVSnapScrollPointAdjuster\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVSnapScrollPointAdjuster");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVSnapScrollPointAdjuster\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVStackAttributes");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVStackAttributes\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVStackAttributes");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVStackAttributes\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVStackItemAttributes");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVStackItemAttributes\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVStackItemAttributes");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVStackItemAttributes\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVStackItemControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVStackItemControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVStackItemControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVStackItemControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVStackTemplateController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVStackTemplateController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVStackTemplateController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVStackTemplateController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVStackTemplateView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVStackTemplateView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVStackTemplateView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVStackTemplateView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVStampView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVStampView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVStampView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVStampView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVStandingsBoxView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVStandingsBoxView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVStandingsBoxView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVStandingsBoxView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVStandingsController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVStandingsController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVStandingsController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVStandingsController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVStoreFavorite");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVStoreFavorite\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVStoreFavorite");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVStoreFavorite\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVStoreFavoriteRefreshTask");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVStoreFavoriteRefreshTask\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVStoreFavoriteRefreshTask");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVStoreFavoriteRefreshTask\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVStoreGenreRadioStation");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVStoreGenreRadioStation\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVStoreGenreRadioStation");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVStoreGenreRadioStation\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVStoreRadioStation");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVStoreRadioStation\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVStoreRadioStation");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVStoreRadioStation\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVSystemFeedResources");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVSystemFeedResources\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVSystemFeedResources");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVSystemFeedResources\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVTCPConnection");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVTCPConnection\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVTCPConnection");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVTCPConnection\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVTCPControlReceiver");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVTCPControlReceiver\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVTCPControlReceiver");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVTCPControlReceiver\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVTCPIPConfigController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVTCPIPConfigController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVTCPIPConfigController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVTCPIPConfigController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVTRDeviceSetupManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVTRDeviceSetupManager\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVTRDeviceSetupManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVTRDeviceSetupManager\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVTVShowRentalPosterControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVTVShowRentalPosterControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVTVShowRentalPosterControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVTVShowRentalPosterControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVTVShowsAppliance");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVTVShowsAppliance\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVTVShowsAppliance");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVTVShowsAppliance\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVTVShowsTopShelfController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVTVShowsTopShelfController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVTVShowsTopShelfController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVTVShowsTopShelfController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVTabWithTitleListHeaderControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVTabWithTitleListHeaderControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVTabWithTitleListHeaderControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVTabWithTitleListHeaderControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVTextConfiguration");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVTextConfiguration\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVTextConfiguration");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVTextConfiguration\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVTextEntryTextControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVTextEntryTextControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVTextEntryTextControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVTextEntryTextControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVTextEntryView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVTextEntryView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVTextEntryView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVTextEntryView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVThreePartHorizontalStretchView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVThreePartHorizontalStretchView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVThreePartHorizontalStretchView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVThreePartHorizontalStretchView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVThunderGameCourtView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVThunderGameCourtView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVThunderGameCourtView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVThunderGameCourtView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVThunderGamePreviewControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVThunderGamePreviewControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVThunderGamePreviewControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVThunderGamePreviewControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVThunderLineScoreView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVThunderLineScoreView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVThunderLineScoreView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVThunderLineScoreView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVThunderPlayerCardView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVThunderPlayerCardView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVThunderPlayerCardView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVThunderPlayerCardView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVThunderStandingsController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVThunderStandingsController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVThunderStandingsController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVThunderStandingsController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVThunderStandingsView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVThunderStandingsView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVThunderStandingsView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVThunderStandingsView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVTimeUtilities");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVTimeUtilities\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVTimeUtilities");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVTimeUtilities\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVTimeZoneChooserController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVTimeZoneChooserController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVTimeZoneChooserController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVTimeZoneChooserController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVTimeZoneSearchAgent");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVTimeZoneSearchAgent\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVTimeZoneSearchAgent");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVTimeZoneSearchAgent\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVTimeZoneUtility");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVTimeZoneUtility\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVTimeZoneUtility");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVTimeZoneUtility\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVToggleAction");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVToggleAction\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVToggleAction");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVToggleAction\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVTomatoMeterTransformer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVTomatoMeterTransformer\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVTomatoMeterTransformer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVTomatoMeterTransformer\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVTouchRemoteManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVTouchRemoteManager\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVTouchRemoteManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVTouchRemoteManager\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVTumblerWithTextListHeaderControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVTumblerWithTextListHeaderControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVTumblerWithTextListHeaderControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVTumblerWithTextListHeaderControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVURLDocument");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVURLDocument\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVURLDocument");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVURLDocument\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVUserRatingAndNumReviewsTransformer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVUserRatingAndNumReviewsTransformer\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVUserRatingAndNumReviewsTransformer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVUserRatingAndNumReviewsTransformer\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVUserRatingToImageControlTransformer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVUserRatingToImageControlTransformer\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVUserRatingToImageControlTransformer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVUserRatingToImageControlTransformer\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVVPNConnection");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVVPNConnection\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVVPNConnection");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVVPNConnection\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVVPNConnectionController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVVPNConnectionController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVVPNConnectionController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVVPNConnectionController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVVendorBag");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVVendorBag\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVVendorBag");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVVendorBag\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVVerifyPaymentOperation");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVVerifyPaymentOperation\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVVerifyPaymentOperation");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVVerifyPaymentOperation\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVVersionInfo");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVVersionInfo\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVVersionInfo");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVVersionInfo\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVVersionStringTransformer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVVersionStringTransformer\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVVersionStringTransformer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVVersionStringTransformer\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVVideoAsset");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVVideoAsset\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVVideoAsset");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVVideoAsset\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVVideoAssetUpdater");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVVideoAssetUpdater\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVVideoAssetUpdater");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVVideoAssetUpdater\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVVideoCacheManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVVideoCacheManager\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVVideoCacheManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVVideoCacheManager\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVWeakEventDelegate");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVWeakEventDelegate\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVWeakEventDelegate");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVWeakEventDelegate\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVWishListFavorite");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVWishListFavorite\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVWishListFavorite");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVWishListFavorite\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVWishListSelectionHandler");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVWishListSelectionHandler\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVWishListSelectionHandler");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVWishListSelectionHandler\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVWrapperControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVWrapperControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVWrapperControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVWrapperControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATVXMLImageLoader");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATVXMLImageLoader\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATVXMLImageLoader");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATVXMLImageLoader\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATViCloudAccount");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATViCloudAccount\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATViCloudAccount");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATViCloudAccount\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATViCloudActivateMyPSController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATViCloudActivateMyPSController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATViCloudActivateMyPSController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATViCloudActivateMyPSController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATViCloudActivatePhotosController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATViCloudActivatePhotosController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATViCloudActivatePhotosController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATViCloudActivatePhotosController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATViCloudAuthenticationController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATViCloudAuthenticationController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATViCloudAuthenticationController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATViCloudAuthenticationController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATViCloudAuthenticationManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATViCloudAuthenticationManager\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATViCloudAuthenticationManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATViCloudAuthenticationManager\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATViCloudAuthenticationResources");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATViCloudAuthenticationResources\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATViCloudAuthenticationResources");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATViCloudAuthenticationResources\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATViCloudAuthenticator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATViCloudAuthenticator\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATViCloudAuthenticator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATViCloudAuthenticator\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATViCloudSignInController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATViCloudSignInController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATViCloudSignInController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATViCloudSignInController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATViCloudSignInHeaderView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATViCloudSignInHeaderView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATViCloudSignInHeaderView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATViCloudSignInHeaderView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATViTunesKeyValueStoreAPI");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATViTunesKeyValueStoreAPI\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATViTunesKeyValueStoreAPI");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATViTunesKeyValueStoreAPI\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATViTunesKeyValueStoreGetItem");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATViTunesKeyValueStoreGetItem\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATViTunesKeyValueStoreGetItem");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATViTunesKeyValueStoreGetItem\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ATViTunesKeyValueStorePutItem");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ATViTunesKeyValueStorePutItem\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ATViTunesKeyValueStorePutItem");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ATViTunesKeyValueStorePutItem\n"); }
    p = dlsym(h, "OBJC_CLASS_$_AVPlayerLayerWithoutImplicitAnimations");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_AVPlayerLayerWithoutImplicitAnimations\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_AVPlayerLayerWithoutImplicitAnimations");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_AVPlayerLayerWithoutImplicitAnimations\n"); }
    p = dlsym(h, "OBJC_CLASS_$_AudioData");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_AudioData\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_AudioData");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_AudioData\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRATVDataCloudGeniusMixImageProxy");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRATVDataCloudGeniusMixImageProxy\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRATVDataCloudGeniusMixImageProxy");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRATVDataCloudGeniusMixImageProxy\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRATVDataImageProxy");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRATVDataImageProxy\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRATVDataImageProxy");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRATVDataImageProxy\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRAccessibilityManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRAccessibilityManager\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRAccessibilityManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRAccessibilityManager\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRAccount");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRAccount\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRAccount");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRAccount\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRAccountManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRAccountManager\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRAccountManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRAccountManager\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRAccountMenuItemPopulator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRAccountMenuItemPopulator\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRAccountMenuItemPopulator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRAccountMenuItemPopulator\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRAccountType");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRAccountType\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRAccountType");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRAccountType\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRActionShelfControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRActionShelfControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRActionShelfControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRActionShelfControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRAdornedMediaShelfView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRAdornedMediaShelfView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRAdornedMediaShelfView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRAdornedMediaShelfView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRAdornedPosterControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRAdornedPosterControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRAdornedPosterControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRAdornedPosterControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRAirTunesMetadataPopulator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRAirTunesMetadataPopulator\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRAirTunesMetadataPopulator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRAirTunesMetadataPopulator\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRAirportManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRAirportManager\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRAirportManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRAirportManager\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRAirportNetwork");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRAirportNetwork\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRAirportNetwork");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRAirportNetwork\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRAirportNetworksControlFactory");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRAirportNetworksControlFactory\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRAirportNetworksControlFactory");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRAirportNetworksControlFactory\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRAirportNetworksProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRAirportNetworksProvider\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRAirportNetworksProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRAirportNetworksProvider\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRAlertControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRAlertControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRAlertControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRAlertControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRAlertController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRAlertController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRAlertController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRAlertController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRAlignmentAdjustingTextControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRAlignmentAdjustingTextControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRAlignmentAdjustingTextControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRAlignmentAdjustingTextControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRAppleIDImageLoadJob");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRAppleIDImageLoadJob\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRAppleIDImageLoadJob");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRAppleIDImageLoadJob\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRApplianceBrowserControlFactory");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRApplianceBrowserControlFactory\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRApplianceBrowserControlFactory");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRApplianceBrowserControlFactory\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRApplianceCategory");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRApplianceCategory\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRApplianceCategory");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRApplianceCategory\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRApplianceCategoryListProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRApplianceCategoryListProvider\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRApplianceCategoryListProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRApplianceCategoryListProvider\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRApplianceCategoryProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRApplianceCategoryProvider\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRApplianceCategoryProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRApplianceCategoryProvider\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRApplianceIconManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRApplianceIconManager\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRApplianceIconManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRApplianceIconManager\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRApplianceInfo");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRApplianceInfo\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRApplianceInfo");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRApplianceInfo\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRApplianceManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRApplianceManager\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRApplianceManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRApplianceManager\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRApplianceProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRApplianceProvider\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRApplianceProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRApplianceProvider\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRApplication");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRApplication\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRApplication");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRApplication\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRApplicationStackManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRApplicationStackManager\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRApplicationStackManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRApplicationStackManager\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRAsyncImageControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRAsyncImageControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRAsyncImageControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRAsyncImageControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRAsyncImageControlBadgeInfo");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRAsyncImageControlBadgeInfo\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRAsyncImageControlBadgeInfo");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRAsyncImageControlBadgeInfo\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRAsyncTask");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRAsyncTask\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRAsyncTask");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRAsyncTask\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRAsyncTaskContext");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRAsyncTaskContext\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRAsyncTaskContext");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRAsyncTaskContext\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRAudioDeviceManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRAudioDeviceManager\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRAudioDeviceManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRAudioDeviceManager\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRAudioVisualizerControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRAudioVisualizerControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRAudioVisualizerControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRAudioVisualizerControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRAudiobookMetadataPopulator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRAudiobookMetadataPopulator\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRAudiobookMetadataPopulator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRAudiobookMetadataPopulator\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRAuthenticationController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRAuthenticationController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRAuthenticationController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRAuthenticationController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRAuthenticationErrorResolutionController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRAuthenticationErrorResolutionController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRAuthenticationErrorResolutionController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRAuthenticationErrorResolutionController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRAuthenticationManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRAuthenticationManager\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRAuthenticationManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRAuthenticationManager\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRAuthenticator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRAuthenticator\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRAuthenticator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRAuthenticator\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRAutoScrollingTextControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRAutoScrollingTextControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRAutoScrollingTextControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRAutoScrollingTextControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRBackdropGradientControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRBackdropGradientControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRBackdropGradientControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRBackdropGradientControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRBackgroundTaskManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRBackgroundTaskManager\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRBackgroundTaskManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRBackgroundTaskManager\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRBaseAppliance");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRBaseAppliance\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRBaseAppliance");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRBaseAppliance\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRBaseMediaAsset");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRBaseMediaAsset\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRBaseMediaAsset");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRBaseMediaAsset\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRBaseMediaCollection");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRBaseMediaCollection\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRBaseMediaCollection");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRBaseMediaCollection\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRBaseMediaProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRBaseMediaProvider\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRBaseMediaProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRBaseMediaProvider\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRBaseMenuItemLayerPopulator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRBaseMenuItemLayerPopulator\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRBaseMenuItemLayerPopulator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRBaseMenuItemLayerPopulator\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRBaseMetadataPopulator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRBaseMetadataPopulator\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRBaseMetadataPopulator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRBaseMetadataPopulator\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRBaseParserDelegate");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRBaseParserDelegate\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRBaseParserDelegate");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRBaseParserDelegate\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRBlockSelectionHandler");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRBlockSelectionHandler\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRBlockSelectionHandler");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRBlockSelectionHandler\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRBlueGlowSelectionLozengeLayer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRBlueGlowSelectionLozengeLayer\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRBlueGlowSelectionLozengeLayer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRBlueGlowSelectionLozengeLayer\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRBlueGlowSelectionLozengeLayerBacking");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRBlueGlowSelectionLozengeLayerBacking\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRBlueGlowSelectionLozengeLayerBacking");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRBlueGlowSelectionLozengeLayerBacking\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRBoxControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRBoxControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRBoxControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRBoxControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRBoxListControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRBoxListControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRBoxListControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRBoxListControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRButtonControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRButtonControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRButtonControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRButtonControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRChapter");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRChapter\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRChapter");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRChapter\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRChapterGridItem");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRChapterGridItem\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRChapterGridItem");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRChapterGridItem\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRChapterGroup");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRChapterGroup\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRChapterGroup");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRChapterGroup\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRChapterSubtitleAudioPickerControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRChapterSubtitleAudioPickerControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRChapterSubtitleAudioPickerControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRChapterSubtitleAudioPickerControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRChapterUtilities");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRChapterUtilities\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRChapterUtilities");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRChapterUtilities\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRCollectionMenuItemPopulator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRCollectionMenuItemPopulator\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRCollectionMenuItemPopulator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRCollectionMenuItemPopulator\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRComboMenuItemLayer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRComboMenuItemLayer\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRComboMenuItemLayer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRComboMenuItemLayer\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRContainerViewDataCache");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRContainerViewDataCache\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRContainerViewDataCache");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRContainerViewDataCache\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRContainerViewSectionInfo");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRContainerViewSectionInfo\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRContainerViewSectionInfo");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRContainerViewSectionInfo\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRContentController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRContentController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRContentController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRContentController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRContextMenuControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRContextMenuControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRContextMenuControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRContextMenuControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRControlLayer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRControlLayer\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRControlLayer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRControlLayer\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRControlMediator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRControlMediator\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRControlMediator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRControlMediator\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRControllerStack");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRControllerStack\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRControllerStack");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRControllerStack\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRCoverArtImageLayer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRCoverArtImageLayer\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRCoverArtImageLayer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRCoverArtImageLayer\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRCoverArtPreviewControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRCoverArtPreviewControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRCoverArtPreviewControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRCoverArtPreviewControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRCrossfadeTransitionControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRCrossfadeTransitionControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRCrossfadeTransitionControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRCrossfadeTransitionControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRCursorControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRCursorControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRCursorControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRCursorControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRCursorLayer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRCursorLayer\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRCursorLayer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRCursorLayer\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRCyclerControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRCyclerControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRCyclerControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRCyclerControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRDarwinNotificationTranslator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRDarwinNotificationTranslator\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRDarwinNotificationTranslator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRDarwinNotificationTranslator\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRDataQueryController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRDataQueryController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRDataQueryController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRDataQueryController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRDefaultAuthenticationManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRDefaultAuthenticationManager\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRDefaultAuthenticationManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRDefaultAuthenticationManager\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRDependentProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRDependentProvider\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRDependentProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRDependentProvider\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRDescriptionOverlayControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRDescriptionOverlayControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRDescriptionOverlayControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRDescriptionOverlayControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRDetailedMediaControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRDetailedMediaControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRDetailedMediaControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRDetailedMediaControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRDetailedMetadataControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRDetailedMetadataControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRDetailedMetadataControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRDetailedMetadataControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRDetailedMusicMetadataControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRDetailedMusicMetadataControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRDetailedMusicMetadataControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRDetailedMusicMetadataControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRDeviceKeyboardMessage");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRDeviceKeyboardMessage\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRDeviceKeyboardMessage");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRDeviceKeyboardMessage\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRDialog");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRDialog\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRDialog");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRDialog\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRDisplayManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRDisplayManager\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRDisplayManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRDisplayManager\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRDisplayMode");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRDisplayMode\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRDisplayMode");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRDisplayMode\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRDividerProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRDividerProvider\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRDividerProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRDividerProvider\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRDotArrayControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRDotArrayControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRDotArrayControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRDotArrayControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRDownloadManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRDownloadManager\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRDownloadManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRDownloadManager\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRDownloadPlayableAlertControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRDownloadPlayableAlertControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRDownloadPlayableAlertControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRDownloadPlayableAlertControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRDropShadowControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRDropShadowControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRDropShadowControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRDropShadowControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRErrorControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRErrorControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRErrorControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRErrorControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BREvent");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BREvent\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BREvent");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BREvent\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BREventChapter");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BREventChapter\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BREventChapter");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BREventChapter\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRFPRange");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRFPRange\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRFPRange");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRFPRange\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRFadeMaskLayer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRFadeMaskLayer\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRFadeMaskLayer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRFadeMaskLayer\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRFadeThroughBlackTransitionControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRFadeThroughBlackTransitionControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRFadeThroughBlackTransitionControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRFadeThroughBlackTransitionControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRFeatureManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRFeatureManager\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRFeatureManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRFeatureManager\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRFocusEngine");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRFocusEngine\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRFocusEngine");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRFocusEngine\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRFocusableImageControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRFocusableImageControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRFocusableImageControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRFocusableImageControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRFontCache");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRFontCache\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRFontCache");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRFontCache\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRFrontControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRFrontControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRFrontControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRFrontControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRFullScreenPhotoController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRFullScreenPhotoController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRFullScreenPhotoController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRFullScreenPhotoController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRGenre");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRGenre\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRGenre");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRGenre\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRGlobalGestureRecognizerManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRGlobalGestureRecognizerManager\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRGlobalGestureRecognizerManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRGlobalGestureRecognizerManager\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRGridControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRGridControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRGridControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRGridControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRGridView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRGridView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRGridView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRGridView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRHIDEvent");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRHIDEvent\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRHIDEvent");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRHIDEvent\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRHeaderControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRHeaderControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRHeaderControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRHeaderControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRHexInputMethod");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRHexInputMethod\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRHexInputMethod");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRHexInputMethod\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRHiddenSelectionMenuItem");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRHiddenSelectionMenuItem\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRHiddenSelectionMenuItem");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRHiddenSelectionMenuItem\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRHorizontalDividerControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRHorizontalDividerControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRHorizontalDividerControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRHorizontalDividerControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRHorizontalSegmentedWidget");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRHorizontalSegmentedWidget\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRHorizontalSegmentedWidget");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRHorizontalSegmentedWidget\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRIPConfiguration");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRIPConfiguration\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRIPConfiguration");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRIPConfiguration\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRITunesLibraryUtilitiesAccess");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRITunesLibraryUtilitiesAccess\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRITunesLibraryUtilitiesAccess");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRITunesLibraryUtilitiesAccess\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRIconPreviewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRIconPreviewController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRIconPreviewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRIconPreviewController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRImageControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRImageControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRImageControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRImageControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRImageLoadJob");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRImageLoadJob\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRImageLoadJob");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRImageLoadJob\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRImageLoader");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRImageLoader\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRImageLoader");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRImageLoader\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRImageManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRImageManager\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRImageManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRImageManager\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRImageProxyProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRImageProxyProvider\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRImageProxyProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRImageProxyProvider\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRImageWithHeaderControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRImageWithHeaderControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRImageWithHeaderControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRImageWithHeaderControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRInitialImage");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRInitialImage\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRInitialImage");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRInitialImage\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRInputMethod");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRInputMethod\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRInputMethod");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRInputMethod\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRInternetRadioImageProxy");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRInternetRadioImageProxy\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRInternetRadioImageProxy");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRInternetRadioImageProxy\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRInvocationAnimationDelegate");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRInvocationAnimationDelegate\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRInvocationAnimationDelegate");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRInvocationAnimationDelegate\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRInvocationSelectionAndPlayHandler");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRInvocationSelectionAndPlayHandler\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRInvocationSelectionAndPlayHandler");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRInvocationSelectionAndPlayHandler\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRInvocationSelectionHandler");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRInvocationSelectionHandler\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRInvocationSelectionHandler");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRInvocationSelectionHandler\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRJapaneseInputMethod");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRJapaneseInputMethod\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRJapaneseInputMethod");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRJapaneseInputMethod\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRKeyCommandControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRKeyCommandControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRKeyCommandControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRKeyCommandControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRKeyValueObservationEntry");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRKeyValueObservationEntry\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRKeyValueObservationEntry");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRKeyValueObservationEntry\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRKeyValueObservingRegistry");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRKeyValueObservingRegistry\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRKeyValueObservingRegistry");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRKeyValueObservingRegistry\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRKeyboard");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRKeyboard\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRKeyboard");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRKeyboard\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRKeyboardActionControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRKeyboardActionControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRKeyboardActionControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRKeyboardActionControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRKeyboardCandidates");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRKeyboardCandidates\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRKeyboardCandidates");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRKeyboardCandidates\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRKeyboardControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRKeyboardControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRKeyboardControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRKeyboardControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRKeyboardHex");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRKeyboardHex\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRKeyboardHex");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRKeyboardHex\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRKeyboardHistory");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRKeyboardHistory\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRKeyboardHistory");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRKeyboardHistory\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRKeyboardHistoryControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRKeyboardHistoryControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRKeyboardHistoryControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRKeyboardHistoryControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRKeyboardJapaneseRomanSquare");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRKeyboardJapaneseRomanSquare\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRKeyboardJapaneseRomanSquare");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRKeyboardJapaneseRomanSquare\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRKeyboardJapaneseRomanSymbols");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRKeyboardJapaneseRomanSymbols\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRKeyboardJapaneseRomanSymbols");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRKeyboardJapaneseRomanSymbols\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRKeyboardJapaneseSquareHiragana");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRKeyboardJapaneseSquareHiragana\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRKeyboardJapaneseSquareHiragana");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRKeyboardJapaneseSquareHiragana\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRKeyboardNumbers");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRKeyboardNumbers\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRKeyboardNumbers");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRKeyboardNumbers\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRKeyboardRomanLogIn");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRKeyboardRomanLogIn\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRKeyboardRomanLogIn");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRKeyboardRomanLogIn\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRKeyboardRomanLogInSeventhRow");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRKeyboardRomanLogInSeventhRow\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRKeyboardRomanLogInSeventhRow");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRKeyboardRomanLogInSeventhRow\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRKeyboardRomanLogInSymbols");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRKeyboardRomanLogInSymbols\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRKeyboardRomanLogInSymbols");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRKeyboardRomanLogInSymbols\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRKeyboardRomanLogInUpperCase");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRKeyboardRomanLogInUpperCase\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRKeyboardRomanLogInUpperCase");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRKeyboardRomanLogInUpperCase\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRKeyboardRomanSearch");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRKeyboardRomanSearch\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRKeyboardRomanSearch");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRKeyboardRomanSearch\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRKeyboardRomanSearchSymbols");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRKeyboardRomanSearchSymbols\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRKeyboardRomanSearchSymbols");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRKeyboardRomanSearchSymbols\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRKeyboardRomanSearchUpperCase");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRKeyboardRomanSearchUpperCase\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRKeyboardRomanSearchUpperCase");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRKeyboardRomanSearchUpperCase\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRKeyboardRomanSquare");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRKeyboardRomanSquare\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRKeyboardRomanSquare");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRKeyboardRomanSquare\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRLegacyProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRLegacyProvider\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRLegacyProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRLegacyProvider\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRListControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRListControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRListControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRListControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRListControlMonitor");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRListControlMonitor\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRListControlMonitor");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRListControlMonitor\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRListView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRListView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRListView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRListView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRLocalizedStringManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRLocalizedStringManager\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRLocalizedStringManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRLocalizedStringManager\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRMainMenuControlFactory");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRMainMenuControlFactory\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRMainMenuControlFactory");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRMainMenuControlFactory\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRMainMenuImageControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRMainMenuImageControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRMainMenuImageControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRMainMenuImageControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRMainMenuSelectionHandler");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRMainMenuSelectionHandler\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRMainMenuSelectionHandler");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRMainMenuSelectionHandler\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRMainMenuShelfErrorControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRMainMenuShelfErrorControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRMainMenuShelfErrorControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRMainMenuShelfErrorControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRMappingDictionary");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRMappingDictionary\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRMappingDictionary");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRMappingDictionary\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRMarimbaMenuView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRMarimbaMenuView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRMarimbaMenuView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRMarimbaMenuView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRMarimbaSlideshowControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRMarimbaSlideshowControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRMarimbaSlideshowControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRMarimbaSlideshowControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRMarimbaSlideshowMusicSetting");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRMarimbaSlideshowMusicSetting\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRMarimbaSlideshowMusicSetting");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRMarimbaSlideshowMusicSetting\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRMarqueeStack");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRMarqueeStack\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRMarqueeStack");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRMarqueeStack\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRMarqueeTextControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRMarqueeTextControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRMarqueeTextControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRMarqueeTextControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRMediaAccessUtilities");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRMediaAccessUtilities\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRMediaAccessUtilities");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRMediaAccessUtilities\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRMediaAssetAdvisoryInfo");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRMediaAssetAdvisoryInfo\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRMediaAssetAdvisoryInfo");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRMediaAssetAdvisoryInfo\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRMediaAssetDigitalExtraInfo");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRMediaAssetDigitalExtraInfo\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRMediaAssetDigitalExtraInfo");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRMediaAssetDigitalExtraInfo\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRMediaAssetExpiryInfo");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRMediaAssetExpiryInfo\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRMediaAssetExpiryInfo");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRMediaAssetExpiryInfo\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRMediaAssetRollInfo");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRMediaAssetRollInfo\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRMediaAssetRollInfo");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRMediaAssetRollInfo\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRMediaAssetSkipInfo");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRMediaAssetSkipInfo\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRMediaAssetSkipInfo");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRMediaAssetSkipInfo\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRMediaCollectionEditor");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRMediaCollectionEditor\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRMediaCollectionEditor");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRMediaCollectionEditor\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRMediaCollectionGeniusInfo");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRMediaCollectionGeniusInfo\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRMediaCollectionGeniusInfo");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRMediaCollectionGeniusInfo\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRMediaCollectionGeniusMixInfo");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRMediaCollectionGeniusMixInfo\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRMediaCollectionGeniusMixInfo");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRMediaCollectionGeniusMixInfo\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRMediaCollectionType");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRMediaCollectionType\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRMediaCollectionType");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRMediaCollectionType\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRMediaListControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRMediaListControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRMediaListControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRMediaListControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRMediaMenuController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRMediaMenuController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRMediaMenuController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRMediaMenuController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRMediaMenuView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRMediaMenuView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRMediaMenuView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRMediaMenuView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRMediaObjectButtonSelectionHandler");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRMediaObjectButtonSelectionHandler\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRMediaObjectButtonSelectionHandler");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRMediaObjectButtonSelectionHandler\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRMediaObjectControlFactory");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRMediaObjectControlFactory\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRMediaObjectControlFactory");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRMediaObjectControlFactory\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRMediaObjectProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRMediaObjectProvider\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRMediaObjectProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRMediaObjectProvider\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRMediaParadeControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRMediaParadeControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRMediaParadeControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRMediaParadeControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRMediaParadeLayer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRMediaParadeLayer\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRMediaParadeLayer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRMediaParadeLayer\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRMediaParadeProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRMediaParadeProvider\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRMediaParadeProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRMediaParadeProvider\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRMediaPlayer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRMediaPlayer\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRMediaPlayer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRMediaPlayer\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRMediaPlayerController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRMediaPlayerController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRMediaPlayerController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRMediaPlayerController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRMediaPlayerControllerTransitionDelegate");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRMediaPlayerControllerTransitionDelegate\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRMediaPlayerControllerTransitionDelegate");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRMediaPlayerControllerTransitionDelegate\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRMediaPlayerEventHandler");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRMediaPlayerEventHandler\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRMediaPlayerEventHandler");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRMediaPlayerEventHandler\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRMediaPlayerManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRMediaPlayerManager\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRMediaPlayerManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRMediaPlayerManager\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRMediaPlayerWaitControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRMediaPlayerWaitControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRMediaPlayerWaitControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRMediaPlayerWaitControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRMediaPreviewControlFactory");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRMediaPreviewControlFactory\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRMediaPreviewControlFactory");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRMediaPreviewControlFactory\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRMediaShelfView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRMediaShelfView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRMediaShelfView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRMediaShelfView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRMediaType");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRMediaType\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRMediaType");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRMediaType\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRMediaUtilities");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRMediaUtilities\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRMediaUtilities");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRMediaUtilities\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRMediatorProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRMediatorProvider\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRMediatorProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRMediatorProvider\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRMenuController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRMenuController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRMenuController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRMenuController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRMenuItem");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRMenuItem\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRMenuItem");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRMenuItem\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRMenuItemLayerFactory");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRMenuItemLayerFactory\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRMenuItemLayerFactory");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRMenuItemLayerFactory\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRMenuItemMediator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRMenuItemMediator\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRMenuItemMediator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRMenuItemMediator\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRMenuSavedState");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRMenuSavedState\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRMenuSavedState");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRMenuSavedState\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRMenuView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRMenuView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRMenuView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRMenuView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRMerchant");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRMerchant\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRMerchant");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRMerchant\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRMerchantInfo");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRMerchantInfo\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRMerchantInfo");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRMerchantInfo\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRMessageButton");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRMessageButton\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRMessageButton");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRMessageButton\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRMessagePopupContentControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRMessagePopupContentControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRMessagePopupContentControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRMessagePopupContentControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRMessagePopupOptionContentControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRMessagePopupOptionContentControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRMessagePopupOptionContentControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRMessagePopupOptionContentControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRMetadataControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRMetadataControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRMetadataControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRMetadataControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRMetadataDetailChunkControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRMetadataDetailChunkControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRMetadataDetailChunkControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRMetadataDetailChunkControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRMetadataDetailControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRMetadataDetailControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRMetadataDetailControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRMetadataDetailControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRMetadataLineLayer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRMetadataLineLayer\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRMetadataLineLayer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRMetadataLineLayer\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRMetadataLinesLayer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRMetadataLinesLayer\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRMetadataLinesLayer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRMetadataLinesLayer\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRMetadataLongDescriptionControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRMetadataLongDescriptionControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRMetadataLongDescriptionControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRMetadataLongDescriptionControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRMetadataLongDescriptionPreviewControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRMetadataLongDescriptionPreviewControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRMetadataLongDescriptionPreviewControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRMetadataLongDescriptionPreviewControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRMetadataPopulatorFactory");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRMetadataPopulatorFactory\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRMetadataPopulatorFactory");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRMetadataPopulatorFactory\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRMetadataPreviewControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRMetadataPreviewControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRMetadataPreviewControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRMetadataPreviewControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRMetadataPreviewControlFactory");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRMetadataPreviewControlFactory\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRMetadataPreviewControlFactory");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRMetadataPreviewControlFactory\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRMetadataTitleControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRMetadataTitleControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRMetadataTitleControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRMetadataTitleControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRModalDialog");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRModalDialog\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRModalDialog");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRModalDialog\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRModalMenuItem");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRModalMenuItem\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRModalMenuItem");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRModalMenuItem\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRModalOptionDialog");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRModalOptionDialog\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRModalOptionDialog");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRModalOptionDialog\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRMovieMetadataPopulator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRMovieMetadataPopulator\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRMovieMetadataPopulator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRMovieMetadataPopulator\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRMovieRatingStringTransformer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRMovieRatingStringTransformer\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRMovieRatingStringTransformer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRMovieRatingStringTransformer\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRMovieTrailer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRMovieTrailer\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRMovieTrailer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRMovieTrailer\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRMovieTrailerCollection");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRMovieTrailerCollection\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRMovieTrailerCollection");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRMovieTrailerCollection\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRMovieTrailerMetadataPopulator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRMovieTrailerMetadataPopulator\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRMovieTrailerMetadataPopulator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRMovieTrailerMetadataPopulator\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRMovieTrailersProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRMovieTrailersProvider\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRMovieTrailersProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRMovieTrailersProvider\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRMultiPartWidgetLayer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRMultiPartWidgetLayer\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRMultiPartWidgetLayer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRMultiPartWidgetLayer\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRMultipleMessageControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRMultipleMessageControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRMultipleMessageControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRMultipleMessageControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRMusicAlbumMetadataPopulator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRMusicAlbumMetadataPopulator\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRMusicAlbumMetadataPopulator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRMusicAlbumMetadataPopulator\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRMusicContextMenuUtility");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRMusicContextMenuUtility\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRMusicContextMenuUtility");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRMusicContextMenuUtility\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRMusicNowPlayingControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRMusicNowPlayingControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRMusicNowPlayingControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRMusicNowPlayingControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRMusicNowPlayingLayer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRMusicNowPlayingLayer\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRMusicNowPlayingLayer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRMusicNowPlayingLayer\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRMusicNowPlayingTransportLayer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRMusicNowPlayingTransportLayer\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRMusicNowPlayingTransportLayer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRMusicNowPlayingTransportLayer\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRMusicVideoMetadataPopulator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRMusicVideoMetadataPopulator\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRMusicVideoMetadataPopulator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRMusicVideoMetadataPopulator\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRNetworkAlertController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRNetworkAlertController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRNetworkAlertController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRNetworkAlertController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRNetworkMediaProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRNetworkMediaProvider\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRNetworkMediaProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRNetworkMediaProvider\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRNetworkMonitor");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRNetworkMonitor\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRNetworkMonitor");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRNetworkMonitor\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRNowPlayingControlFactory");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRNowPlayingControlFactory\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRNowPlayingControlFactory");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRNowPlayingControlFactory\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRNowPlayingProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRNowPlayingProvider\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRNowPlayingProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRNowPlayingProvider\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRNullProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRNullProvider\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRNullProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRNullProvider\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRNumbersKeyboardActionKeysContainer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRNumbersKeyboardActionKeysContainer\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRNumbersKeyboardActionKeysContainer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRNumbersKeyboardActionKeysContainer\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BROptionAlertControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BROptionAlertControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BROptionAlertControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BROptionAlertControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BROptionDialog");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BROptionDialog\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BROptionDialog");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BROptionDialog\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BROverlayPanelControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BROverlayPanelControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BROverlayPanelControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BROverlayPanelControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRPageStripView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRPageStripView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRPageStripView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRPageStripView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRPagedView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRPagedView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRPagedView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRPagedView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRPairingPinControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRPairingPinControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRPairingPinControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRPairingPinControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRPanelControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRPanelControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRPanelControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRPanelControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRParentalControlManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRParentalControlManager\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRParentalControlManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRParentalControlManager\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRParentalControlsPasscodeChangedController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRParentalControlsPasscodeChangedController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRParentalControlsPasscodeChangedController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRParentalControlsPasscodeChangedController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRParentalControlsPasscodeController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRParentalControlsPasscodeController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRParentalControlsPasscodeController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRParentalControlsPasscodeController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRPasscodeEntryControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRPasscodeEntryControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRPasscodeEntryControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRPasscodeEntryControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRPasscodeSelectionLayer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRPasscodeSelectionLayer\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRPasscodeSelectionLayer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRPasscodeSelectionLayer\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRPasscodeSelectionWidget");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRPasscodeSelectionWidget\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRPasscodeSelectionWidget");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRPasscodeSelectionWidget\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRPercentageIndicatorLayer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRPercentageIndicatorLayer\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRPercentageIndicatorLayer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRPercentageIndicatorLayer\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRPhotoBrowserBannerButton");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRPhotoBrowserBannerButton\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRPhotoBrowserBannerButton");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRPhotoBrowserBannerButton\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRPhotoBrowserControlFactory");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRPhotoBrowserControlFactory\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRPhotoBrowserControlFactory");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRPhotoBrowserControlFactory\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRPhotoBrowserController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRPhotoBrowserController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRPhotoBrowserController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRPhotoBrowserController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRPhotoBrowserCorkBoardControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRPhotoBrowserCorkBoardControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRPhotoBrowserCorkBoardControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRPhotoBrowserCorkBoardControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRPhotoBrowserHeaderControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRPhotoBrowserHeaderControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRPhotoBrowserHeaderControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRPhotoBrowserHeaderControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRPhotoCollectionDataSource");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRPhotoCollectionDataSource\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRPhotoCollectionDataSource");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRPhotoCollectionDataSource\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRPhotoControlFactory");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRPhotoControlFactory\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRPhotoControlFactory");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRPhotoControlFactory\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRPhotoImageProxy");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRPhotoImageProxy\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRPhotoImageProxy");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRPhotoImageProxy\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRPhotoMediaAsset");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRPhotoMediaAsset\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRPhotoMediaAsset");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRPhotoMediaAsset\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRPhotoMediaCollection");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRPhotoMediaCollection\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRPhotoMediaCollection");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRPhotoMediaCollection\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRPhotoProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRPhotoProvider\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRPhotoProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRPhotoProvider\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRPhotoProviderForCollection");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRPhotoProviderForCollection\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRPhotoProviderForCollection");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRPhotoProviderForCollection\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRPhotoSubImageProxy");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRPhotoSubImageProxy\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRPhotoSubImageProxy");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRPhotoSubImageProxy\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRPhotoURLMediaAsset");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRPhotoURLMediaAsset\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRPhotoURLMediaAsset");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRPhotoURLMediaAsset\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRPlayButtonEnabledMenuItem");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRPlayButtonEnabledMenuItem\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRPlayButtonEnabledMenuItem");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRPlayButtonEnabledMenuItem\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRPlayButtonEnabledPosterControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRPlayButtonEnabledPosterControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRPlayButtonEnabledPosterControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRPlayButtonEnabledPosterControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRPlaybackFloatingButtonControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRPlaybackFloatingButtonControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRPlaybackFloatingButtonControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRPlaybackFloatingButtonControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRPlaybackFloatingButtonPanelControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRPlaybackFloatingButtonPanelControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRPlaybackFloatingButtonPanelControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRPlaybackFloatingButtonPanelControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRPodcastMetadataPopulator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRPodcastMetadataPopulator\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRPodcastMetadataPopulator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRPodcastMetadataPopulator\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRPopPanelControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRPopPanelControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRPopPanelControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRPopPanelControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRPopUpManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRPopUpManager\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRPopUpManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRPopUpManager\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRPopupDialogControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRPopupDialogControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRPopupDialogControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRPopupDialogControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRPopupKeyboardControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRPopupKeyboardControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRPopupKeyboardControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRPopupKeyboardControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRPopupKeyboardVariableWidthKeyRowPlane");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRPopupKeyboardVariableWidthKeyRowPlane\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRPopupKeyboardVariableWidthKeyRowPlane");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRPopupKeyboardVariableWidthKeyRowPlane\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRPopupKeyboardWithDeleteButton");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRPopupKeyboardWithDeleteButton\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRPopupKeyboardWithDeleteButton");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRPopupKeyboardWithDeleteButton\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRPosterBadgeInfo");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRPosterBadgeInfo\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRPosterBadgeInfo");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRPosterBadgeInfo\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRPosterControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRPosterControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRPosterControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRPosterControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRPosterControlFactory");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRPosterControlFactory\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRPosterControlFactory");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRPosterControlFactory\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRPosterImageControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRPosterImageControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRPosterImageControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRPosterImageControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRPosterLayer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRPosterLayer\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRPosterLayer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRPosterLayer\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRPosterOverlayControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRPosterOverlayControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRPosterOverlayControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRPosterOverlayControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRPosterReflectionControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRPosterReflectionControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRPosterReflectionControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRPosterReflectionControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRPosterSuperShowcaseOverlayControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRPosterSuperShowcaseOverlayControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRPosterSuperShowcaseOverlayControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRPosterSuperShowcaseOverlayControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRPreviewBrowserControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRPreviewBrowserControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRPreviewBrowserControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRPreviewBrowserControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRPreviewBrowserSelectionHandler");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRPreviewBrowserSelectionHandler\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRPreviewBrowserSelectionHandler");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRPreviewBrowserSelectionHandler\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRProfileManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRProfileManager\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRProfileManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRProfileManager\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRProgressBarWidget");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRProgressBarWidget\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRProgressBarWidget");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRProgressBarWidget\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRProviderDataSourceAdapter");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRProviderDataSourceAdapter\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRProviderDataSourceAdapter");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRProviderDataSourceAdapter\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRProviderGroup");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRProviderGroup\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRProviderGroup");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRProviderGroup\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRRSSMediaAsset");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRRSSMediaAsset\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRRSSMediaAsset");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRRSSMediaAsset\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRRSSMetadataPopulator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRRSSMetadataPopulator\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRRSSMetadataPopulator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRRSSMetadataPopulator\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRRadioMetadataPopulator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRRadioMetadataPopulator\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRRadioMetadataPopulator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRRadioMetadataPopulator\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRReflectedImageControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRReflectedImageControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRReflectedImageControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRReflectedImageControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRReflectionControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRReflectionControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRReflectionControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRReflectionControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRResolution");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRResolution\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRResolution");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRResolution\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRResumeMenuControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRResumeMenuControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRResumeMenuControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRResumeMenuControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRRetailHiddenMenuItem");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRRetailHiddenMenuItem\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRRetailHiddenMenuItem");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRRetailHiddenMenuItem\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRRetailModeAuthenticationController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRRetailModeAuthenticationController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRRetailModeAuthenticationController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRRetailModeAuthenticationController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRRomanInputMethod");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRRomanInputMethod\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRRomanInputMethod");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRRomanInputMethod\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRRoundCursorLayer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRRoundCursorLayer\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRRoundCursorLayer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRRoundCursorLayer\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRScalingLayoutManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRScalingLayoutManager\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRScalingLayoutManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRScalingLayoutManager\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRScrollControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRScrollControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRScrollControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRScrollControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRScrollingTextBoxControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRScrollingTextBoxControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRScrollingTextBoxControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRScrollingTextBoxControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRScrollingTextControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRScrollingTextControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRScrollingTextControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRScrollingTextControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRScrollingTextControlFactory");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRScrollingTextControlFactory\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRScrollingTextControlFactory");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRScrollingTextControlFactory\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRScrollingTextControlSelectionHandler");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRScrollingTextControlSelectionHandler\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRScrollingTextControlSelectionHandler");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRScrollingTextControlSelectionHandler\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRScrollingTextPlane");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRScrollingTextPlane\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRScrollingTextPlane");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRScrollingTextPlane\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRScrollingTextTextProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRScrollingTextTextProvider\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRScrollingTextTextProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRScrollingTextTextProvider\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRSelectionLozengeLayer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRSelectionLozengeLayer\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRSelectionLozengeLayer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRSelectionLozengeLayer\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRSentinel");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRSentinel\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRSentinel");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRSentinel\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRShimmerControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRShimmerControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRShimmerControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRShimmerControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRSimpleMenuItem");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRSimpleMenuItem\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRSimpleMenuItem");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRSimpleMenuItem\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRSimpleMenuItemPopulator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRSimpleMenuItemPopulator\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRSimpleMenuItemPopulator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRSimpleMenuItemPopulator\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRSingleton");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRSingleton\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRSingleton");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRSingleton\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRSlideshowSettingsController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRSlideshowSettingsController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRSlideshowSettingsController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRSlideshowSettingsController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRSongMenuItemPopulator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRSongMenuItemPopulator\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRSongMenuItemPopulator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRSongMenuItemPopulator\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRSongMetadataPopulator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRSongMetadataPopulator\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRSongMetadataPopulator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRSongMetadataPopulator\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRSoundHandler");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRSoundHandler\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRSoundHandler");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRSoundHandler\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRSpacerControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRSpacerControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRSpacerControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRSpacerControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRStandardCursorLayer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRStandardCursorLayer\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRStandardCursorLayer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRStandardCursorLayer\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRStateMachine");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRStateMachine\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRStateMachine");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRStateMachine\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRStateMachineEventTuple");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRStateMachineEventTuple\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRStateMachineEventTuple");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRStateMachineEventTuple\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRStatusAlertControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRStatusAlertControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRStatusAlertControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRStatusAlertControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRStreamingMediaAsset");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRStreamingMediaAsset\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRStreamingMediaAsset");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRStreamingMediaAsset\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRStreamingPhotoAsset");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRStreamingPhotoAsset\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRStreamingPhotoAsset");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRStreamingPhotoAsset\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRStreamingPhotoCollection");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRStreamingPhotoCollection\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRStreamingPhotoCollection");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRStreamingPhotoCollection\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRStrokeAndFillTextControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRStrokeAndFillTextControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRStrokeAndFillTextControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRStrokeAndFillTextControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRSubsetProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRSubsetProvider\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRSubsetProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRSubsetProvider\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRTVShowMetadataPopulator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRTVShowMetadataPopulator\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRTVShowMetadataPopulator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRTVShowMetadataPopulator\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRTabControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRTabControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRTabControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRTabControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRTabControlItem");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRTabControlItem\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRTabControlItem");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRTabControlItem\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRTableRow");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRTableRow\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRTableRow");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRTableRow\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRTableView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRTableView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRTableView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRTableView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRTaskManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRTaskManager\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRTaskManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRTaskManager\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRTextColumnControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRTextColumnControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRTextColumnControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRTextColumnControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRTextControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRTextControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRTextControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRTextControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRTextControlWithWiderFocusFrame");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRTextControlWithWiderFocusFrame\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRTextControlWithWiderFocusFrame");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRTextControlWithWiderFocusFrame\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRTextEntryButtonsDialog");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRTextEntryButtonsDialog\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRTextEntryButtonsDialog");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRTextEntryButtonsDialog\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRTextEntryControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRTextEntryControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRTextEntryControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRTextEntryControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRTextEntryController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRTextEntryController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRTextEntryController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRTextEntryController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRTextEntryCursorLayer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRTextEntryCursorLayer\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRTextEntryCursorLayer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRTextEntryCursorLayer\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRTextEntryDialog");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRTextEntryDialog\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRTextEntryDialog");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRTextEntryDialog\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRTextEntryHistory");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRTextEntryHistory\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRTextEntryHistory");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRTextEntryHistory\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRTextEntryHistoryBehavior");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRTextEntryHistoryBehavior\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRTextEntryHistoryBehavior");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRTextEntryHistoryBehavior\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRTextEntryHistoryClient");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRTextEntryHistoryClient\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRTextEntryHistoryClient");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRTextEntryHistoryClient\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRTextEntryHistoryItem");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRTextEntryHistoryItem\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRTextEntryHistoryItem");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRTextEntryHistoryItem\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRTextEntryPlayPauseMessage");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRTextEntryPlayPauseMessage\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRTextEntryPlayPauseMessage");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRTextEntryPlayPauseMessage\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRTextFieldBackgroundLayer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRTextFieldBackgroundLayer\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRTextFieldBackgroundLayer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRTextFieldBackgroundLayer\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRTextFieldControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRTextFieldControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRTextFieldControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRTextFieldControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRTextFooterControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRTextFooterControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRTextFooterControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRTextFooterControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRTextLineControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRTextLineControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRTextLineControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRTextLineControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRTextMenuItemControlFactory");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRTextMenuItemControlFactory\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRTextMenuItemControlFactory");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRTextMenuItemControlFactory\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRTextWithSpinnerController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRTextWithSpinnerController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRTextWithSpinnerController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRTextWithSpinnerController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRThemeInfo");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRThemeInfo\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRThemeInfo");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRThemeInfo\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRThreadCallback");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRThreadCallback\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRThreadCallback");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRThreadCallback\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRThreadNotificationManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRThreadNotificationManager\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRThreadNotificationManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRThreadNotificationManager\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRThresholdControlMediator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRThresholdControlMediator\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRThresholdControlMediator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRThresholdControlMediator\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRTileLayer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRTileLayer\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRTileLayer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRTileLayer\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRTiledLayer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRTiledLayer\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRTiledLayer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRTiledLayer\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRTimer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRTimer\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRTimer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRTimer\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRTitledTextControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRTitledTextControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRTitledTextControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRTitledTextControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRTopShelfView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRTopShelfView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRTopShelfView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRTopShelfView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRTrackInfoControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRTrackInfoControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRTrackInfoControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRTrackInfoControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRTrackInfoLayer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRTrackInfoLayer\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRTrackInfoLayer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRTrackInfoLayer\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRTrailerDelegate");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRTrailerDelegate\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRTrailerDelegate");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRTrailerDelegate\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRTransitionControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRTransitionControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRTransitionControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRTransitionControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRTransportControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRTransportControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRTransportControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRTransportControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRTransportLayer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRTransportLayer\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRTransportLayer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRTransportLayer\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRTumblerControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRTumblerControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRTumblerControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRTumblerControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRType");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRType\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRType");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRType\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRTypeaheadPhraseAccumulator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRTypeaheadPhraseAccumulator\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRTypeaheadPhraseAccumulator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRTypeaheadPhraseAccumulator\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRTypesetLine");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRTypesetLine\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRTypesetLine");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRTypesetLine\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRTypesetter");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRTypesetter\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRTypesetter");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRTypesetter\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRURLImageProxy");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRURLImageProxy\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRURLImageProxy");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRURLImageProxy\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRURLImageProxyHelper");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRURLImageProxyHelper\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRURLImageProxyHelper");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRURLImageProxyHelper\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRUnboundedSelectionLozengeLayer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRUnboundedSelectionLozengeLayer\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRUnboundedSelectionLozengeLayer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRUnboundedSelectionLozengeLayer\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRUsageReporter");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRUsageReporter\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRUsageReporter");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRUsageReporter\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRUsageReporterOptInDialog");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRUsageReporterOptInDialog\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRUsageReporterOptInDialog");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRUsageReporterOptInDialog\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRUserPasswordAccount");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRUserPasswordAccount\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRUserPasswordAccount");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRUserPasswordAccount\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRUserPasswordAuthenticationController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRUserPasswordAuthenticationController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRUserPasswordAuthenticationController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRUserPasswordAuthenticationController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRUserPasswordAuthenticationResources");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRUserPasswordAuthenticationResources\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRUserPasswordAuthenticationResources");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRUserPasswordAuthenticationResources\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRUserPasswordAuthenticator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRUserPasswordAuthenticator\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRUserPasswordAuthenticator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRUserPasswordAuthenticator\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRUserPasswordCollectingAuthenticator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRUserPasswordCollectingAuthenticator\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRUserPasswordCollectingAuthenticator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRUserPasswordCollectingAuthenticator\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRVOSpeechAction");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRVOSpeechAction\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRVOSpeechAction");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRVOSpeechAction\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRVerticalDividerControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRVerticalDividerControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRVerticalDividerControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRVerticalDividerControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRVerticalScrollBarControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRVerticalScrollBarControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRVerticalScrollBarControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRVerticalScrollBarControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRVideoChapterControlFactory");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRVideoChapterControlFactory\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRVideoChapterControlFactory");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRVideoChapterControlFactory\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRVideoChapterProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRVideoChapterProvider\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRVideoChapterProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRVideoChapterProvider\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRViewController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRViewController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRVoiceOver");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRVoiceOver\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRVoiceOver");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRVoiceOver\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRVoiceOverSpeechManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRVoiceOverSpeechManager\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRVoiceOverSpeechManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRVoiceOverSpeechManager\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRVolumeControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRVolumeControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRVolumeControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRVolumeControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRWaitPromptControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRWaitPromptControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRWaitPromptControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRWaitPromptControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRWaitSpinnerControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRWaitSpinnerControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRWaitSpinnerControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRWaitSpinnerControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRWindow");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRWindow\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRWindow");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRWindow\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRXMLImageProxy");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRXMLImageProxy\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRXMLImageProxy");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRXMLImageProxy\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRXMLMediaAsset");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRXMLMediaAsset\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRXMLMediaAsset");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRXMLMediaAsset\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRYTMetadataPopulator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRYTMetadataPopulator\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRYTMetadataPopulator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRYTMetadataPopulator\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BRZoomTransitionControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BRZoomTransitionControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BRZoomTransitionControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BRZoomTransitionControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BlackoutAnimationDelegate");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BlackoutAnimationDelegate\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BlackoutAnimationDelegate");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BlackoutAnimationDelegate\n"); }
    p = dlsym(h, "OBJC_CLASS_$_Buffer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_Buffer\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_Buffer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_Buffer\n"); }
    p = dlsym(h, "OBJC_CLASS_$_BuiltinConfig");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_BuiltinConfig\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_BuiltinConfig");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_BuiltinConfig\n"); }
    p = dlsym(h, "OBJC_CLASS_$_COMPUTERSAppliance");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_COMPUTERSAppliance\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_COMPUTERSAppliance");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_COMPUTERSAppliance\n"); }
    p = dlsym(h, "OBJC_CLASS_$_COMPUTERSApplianceController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_COMPUTERSApplianceController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_COMPUTERSApplianceController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_COMPUTERSApplianceController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_COMPUTERSTopShelfController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_COMPUTERSTopShelfController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_COMPUTERSTopShelfController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_COMPUTERSTopShelfController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_COMPUTERSTopShelfSharingView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_COMPUTERSTopShelfSharingView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_COMPUTERSTopShelfSharingView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_COMPUTERSTopShelfSharingView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ChunkData");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ChunkData\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ChunkData");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ChunkData\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ComputersController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ComputersController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ComputersController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ComputersController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ConfigParser");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ConfigParser\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ConfigParser");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ConfigParser\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ContentHeaderDownloader");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ContentHeaderDownloader\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ContentHeaderDownloader");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ContentHeaderDownloader\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ContentHeaderDownloaderManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ContentHeaderDownloaderManager\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ContentHeaderDownloaderManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ContentHeaderDownloaderManager\n"); }
    p = dlsym(h, "OBJC_CLASS_$_DRMData");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_DRMData\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_DRMData");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_DRMData\n"); }
    p = dlsym(h, "OBJC_CLASS_$_DownloaderQueue");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_DownloaderQueue\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_DownloaderQueue");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_DownloaderQueue\n"); }
    p = dlsym(h, "OBJC_CLASS_$_FeedElementResources");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_FeedElementResources\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_FeedElementResources");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_FeedElementResources\n"); }
    p = dlsym(h, "OBJC_CLASS_$_FetchPreferredLanguagesPeriodicWorkerTask");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_FetchPreferredLanguagesPeriodicWorkerTask\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_FetchPreferredLanguagesPeriodicWorkerTask");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_FetchPreferredLanguagesPeriodicWorkerTask\n"); }
    p = dlsym(h, "OBJC_CLASS_$_GeniusMixClusterDescriptionView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_GeniusMixClusterDescriptionView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_GeniusMixClusterDescriptionView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_GeniusMixClusterDescriptionView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_GeniusMixClusterView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_GeniusMixClusterView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_GeniusMixClusterView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_GeniusMixClusterView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_HttpCookieManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_HttpCookieManager\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_HttpCookieManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_HttpCookieManager\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ID3Header");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ID3Header\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ID3Header");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ID3Header\n"); }
    p = dlsym(h, "OBJC_CLASS_$_IFrameData");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_IFrameData\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_IFrameData");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_IFrameData\n"); }
    p = dlsym(h, "OBJC_CLASS_$_IFrameIndexObject");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_IFrameIndexObject\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_IFrameIndexObject");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_IFrameIndexObject\n"); }
    p = dlsym(h, "OBJC_CLASS_$_IFrameIndexOffsetObject");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_IFrameIndexOffsetObject\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_IFrameIndexOffsetObject");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_IFrameIndexOffsetObject\n"); }
    p = dlsym(h, "OBJC_CLASS_$_IOSBridgeAPI");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_IOSBridgeAPI\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_IOSBridgeAPI");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_IOSBridgeAPI\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ISURLOperationNoCookies");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ISURLOperationNoCookies\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ISURLOperationNoCookies");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ISURLOperationNoCookies\n"); }
    p = dlsym(h, "OBJC_CLASS_$_IndexData");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_IndexData\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_IndexData");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_IndexData\n"); }
    p = dlsym(h, "OBJC_CLASS_$_InstallableResourceRecord");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_InstallableResourceRecord\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_InstallableResourceRecord");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_InstallableResourceRecord\n"); }
    p = dlsym(h, "OBJC_CLASS_$_JSSKPaymentQueueTransactionObserver");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_JSSKPaymentQueueTransactionObserver\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_JSSKPaymentQueueTransactionObserver");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_JSSKPaymentQueueTransactionObserver\n"); }
    p = dlsym(h, "OBJC_CLASS_$_LTAVChapter");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_LTAVChapter\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_LTAVChapter");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_LTAVChapter\n"); }
    p = dlsym(h, "OBJC_CLASS_$_LTAVDownloadTestConnection");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_LTAVDownloadTestConnection\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_LTAVDownloadTestConnection");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_LTAVDownloadTestConnection\n"); }
    p = dlsym(h, "OBJC_CLASS_$_LTAVLeaseAgent");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_LTAVLeaseAgent\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_LTAVLeaseAgent");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_LTAVLeaseAgent\n"); }
    p = dlsym(h, "OBJC_CLASS_$_LTAVLeaseAgentPlayerAdaptor");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_LTAVLeaseAgentPlayerAdaptor\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_LTAVLeaseAgentPlayerAdaptor");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_LTAVLeaseAgentPlayerAdaptor\n"); }
    p = dlsym(h, "OBJC_CLASS_$_LTAVPlayer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_LTAVPlayer\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_LTAVPlayer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_LTAVPlayer\n"); }
    p = dlsym(h, "OBJC_CLASS_$_LTAVPlaylist");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_LTAVPlaylist\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_LTAVPlaylist");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_LTAVPlaylist\n"); }
    p = dlsym(h, "OBJC_CLASS_$_LTAirPlayAgent");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_LTAirPlayAgent\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_LTAirPlayAgent");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_LTAirPlayAgent\n"); }
    p = dlsym(h, "OBJC_CLASS_$_LTAirPlayAsset");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_LTAirPlayAsset\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_LTAirPlayAsset");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_LTAirPlayAsset\n"); }
    p = dlsym(h, "OBJC_CLASS_$_LTAirPlayPINControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_LTAirPlayPINControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_LTAirPlayPINControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_LTAirPlayPINControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_LTAirPlayPresentationController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_LTAirPlayPresentationController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_LTAirPlayPresentationController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_LTAirPlayPresentationController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_LTAirPlayStatusControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_LTAirPlayStatusControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_LTAirPlayStatusControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_LTAirPlayStatusControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_LTAppDelegate");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_LTAppDelegate\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_LTAppDelegate");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_LTAppDelegate\n"); }
    p = dlsym(h, "OBJC_CLASS_$_LTController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_LTController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_LTController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_LTController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_LTDeviceActivationController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_LTDeviceActivationController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_LTDeviceActivationController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_LTDeviceActivationController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_LTDownloadTestConnection");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_LTDownloadTestConnection\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_LTDownloadTestConnection");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_LTDownloadTestConnection\n"); }
    p = dlsym(h, "OBJC_CLASS_$_LTExpirationNoticeController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_LTExpirationNoticeController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_LTExpirationNoticeController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_LTExpirationNoticeController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_LTFairPlayInfo");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_LTFairPlayInfo\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_LTFairPlayInfo");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_LTFairPlayInfo\n"); }
    p = dlsym(h, "OBJC_CLASS_$_LTHDCPIndicatorControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_LTHDCPIndicatorControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_LTHDCPIndicatorControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_LTHDCPIndicatorControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_LTITunesDownloadTestManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_LTITunesDownloadTestManager\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_LTITunesDownloadTestManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_LTITunesDownloadTestManager\n"); }
    p = dlsym(h, "OBJC_CLASS_$_LTImageTrickPlayAsset");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_LTImageTrickPlayAsset\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_LTImageTrickPlayAsset");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_LTImageTrickPlayAsset\n"); }
    p = dlsym(h, "OBJC_CLASS_$_LTImageTrickPlayPlayer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_LTImageTrickPlayPlayer\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_LTImageTrickPlayPlayer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_LTImageTrickPlayPlayer\n"); }
    p = dlsym(h, "OBJC_CLASS_$_LTLanguageController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_LTLanguageController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_LTLanguageController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_LTLanguageController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_LTLocaleSetupController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_LTLocaleSetupController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_LTLocaleSetupController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_LTLocaleSetupController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_LTMarimbaPhotoPlayer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_LTMarimbaPhotoPlayer\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_LTMarimbaPhotoPlayer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_LTMarimbaPhotoPlayer\n"); }
    p = dlsym(h, "OBJC_CLASS_$_LTMessagesController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_LTMessagesController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_LTMessagesController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_LTMessagesController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_LTMusicScrubber");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_LTMusicScrubber\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_LTMusicScrubber");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_LTMusicScrubber\n"); }
    p = dlsym(h, "OBJC_CLASS_$_LTNTPStartupController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_LTNTPStartupController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_LTNTPStartupController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_LTNTPStartupController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_LTNetworkFailureController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_LTNetworkFailureController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_LTNetworkFailureController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_LTNetworkFailureController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_LTPrivacyNoticeController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_LTPrivacyNoticeController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_LTPrivacyNoticeController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_LTPrivacyNoticeController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_LTSetupWelcomeController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_LTSetupWelcomeController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_LTSetupWelcomeController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_LTSetupWelcomeController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_LTSkipAssetVisualControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_LTSkipAssetVisualControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_LTSkipAssetVisualControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_LTSkipAssetVisualControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_LTSpringboardServices");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_LTSpringboardServices\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_LTSpringboardServices");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_LTSpringboardServices\n"); }
    p = dlsym(h, "OBJC_CLASS_$_LTSupervisedSetupController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_LTSupervisedSetupController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_LTSupervisedSetupController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_LTSupervisedSetupController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_LTThermalIndicatorControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_LTThermalIndicatorControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_LTThermalIndicatorControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_LTThermalIndicatorControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_LTThermalNoticeController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_LTThermalNoticeController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_LTThermalNoticeController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_LTThermalNoticeController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_LTTrickPlayAsset");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_LTTrickPlayAsset\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_LTTrickPlayAsset");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_LTTrickPlayAsset\n"); }
    p = dlsym(h, "OBJC_CLASS_$_LTTrickPlayPlayer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_LTTrickPlayPlayer\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_LTTrickPlayPlayer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_LTTrickPlayPlayer\n"); }
    p = dlsym(h, "OBJC_CLASS_$_LTUsageReporterMonitor");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_LTUsageReporterMonitor\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_LTUsageReporterMonitor");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_LTUsageReporterMonitor\n"); }
    p = dlsym(h, "OBJC_CLASS_$_LTVideoImageProxy");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_LTVideoImageProxy\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_LTVideoImageProxy");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_LTVideoImageProxy\n"); }
    p = dlsym(h, "OBJC_CLASS_$_LTVideoViewControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_LTVideoViewControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_LTVideoViewControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_LTVideoViewControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_LTVideoVisualControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_LTVideoVisualControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_LTVideoVisualControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_LTVideoVisualControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_LTWirelessSetupController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_LTWirelessSetupController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_LTWirelessSetupController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_LTWirelessSetupController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ListAnimationDelegate");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ListAnimationDelegate\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ListAnimationDelegate");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ListAnimationDelegate\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ListViewAnimationDelegate");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ListViewAnimationDelegate\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ListViewAnimationDelegate");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ListViewAnimationDelegate\n"); }
    p = dlsym(h, "OBJC_CLASS_$_Logger");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_Logger\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_Logger");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_Logger\n"); }
    p = dlsym(h, "OBJC_CLASS_$_MEAirTunesAccount");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_MEAirTunesAccount\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_MEAirTunesAccount");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_MEAirTunesAccount\n"); }
    p = dlsym(h, "OBJC_CLASS_$_MEAirTunesImageProxy");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_MEAirTunesImageProxy\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_MEAirTunesImageProxy");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_MEAirTunesImageProxy\n"); }
    p = dlsym(h, "OBJC_CLASS_$_MEAirTunesMediaAsset");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_MEAirTunesMediaAsset\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_MEAirTunesMediaAsset");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_MEAirTunesMediaAsset\n"); }
    p = dlsym(h, "OBJC_CLASS_$_MEAirTunesMediaProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_MEAirTunesMediaProvider\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_MEAirTunesMediaProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_MEAirTunesMediaProvider\n"); }
    p = dlsym(h, "OBJC_CLASS_$_MEAirTunesPlayer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_MEAirTunesPlayer\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_MEAirTunesPlayer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_MEAirTunesPlayer\n"); }
    p = dlsym(h, "OBJC_CLASS_$_MECachedPhotoCollection");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_MECachedPhotoCollection\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_MECachedPhotoCollection");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_MECachedPhotoCollection\n"); }
    p = dlsym(h, "OBJC_CLASS_$_MECachedPhotoDataClient");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_MECachedPhotoDataClient\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_MECachedPhotoDataClient");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_MECachedPhotoDataClient\n"); }
    p = dlsym(h, "OBJC_CLASS_$_MECachedPhotoItem");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_MECachedPhotoItem\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_MECachedPhotoItem");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_MECachedPhotoItem\n"); }
    p = dlsym(h, "OBJC_CLASS_$_MEITunesAccount");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_MEITunesAccount\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_MEITunesAccount");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_MEITunesAccount\n"); }
    p = dlsym(h, "OBJC_CLASS_$_MEITunesAssetExpiryInfo");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_MEITunesAssetExpiryInfo\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_MEITunesAssetExpiryInfo");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_MEITunesAssetExpiryInfo\n"); }
    p = dlsym(h, "OBJC_CLASS_$_MEITunesContext");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_MEITunesContext\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_MEITunesContext");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_MEITunesContext\n"); }
    p = dlsym(h, "OBJC_CLASS_$_MEITunesHomeShareAccount");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_MEITunesHomeShareAccount\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_MEITunesHomeShareAccount");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_MEITunesHomeShareAccount\n"); }
    p = dlsym(h, "OBJC_CLASS_$_MEITunesHomeShareAuthenticationManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_MEITunesHomeShareAuthenticationManager\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_MEITunesHomeShareAuthenticationManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_MEITunesHomeShareAuthenticationManager\n"); }
    p = dlsym(h, "OBJC_CLASS_$_MEITunesHomeShareAuthenticator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_MEITunesHomeShareAuthenticator\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_MEITunesHomeShareAuthenticator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_MEITunesHomeShareAuthenticator\n"); }
    p = dlsym(h, "OBJC_CLASS_$_MEITunesPhotoCollection");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_MEITunesPhotoCollection\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_MEITunesPhotoCollection");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_MEITunesPhotoCollection\n"); }
    p = dlsym(h, "OBJC_CLASS_$_MEITunesPhotoDataClient");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_MEITunesPhotoDataClient\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_MEITunesPhotoDataClient");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_MEITunesPhotoDataClient\n"); }
    p = dlsym(h, "OBJC_CLASS_$_MEITunesPhotoItem");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_MEITunesPhotoItem\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_MEITunesPhotoItem");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_MEITunesPhotoItem\n"); }
    p = dlsym(h, "OBJC_CLASS_$_MEITunesStoreAccount");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_MEITunesStoreAccount\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_MEITunesStoreAccount");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_MEITunesStoreAccount\n"); }
    p = dlsym(h, "OBJC_CLASS_$_MEITunesStoreAuthenticationController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_MEITunesStoreAuthenticationController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_MEITunesStoreAuthenticationController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_MEITunesStoreAuthenticationController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_MEITunesStoreAuthenticationManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_MEITunesStoreAuthenticationManager\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_MEITunesStoreAuthenticationManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_MEITunesStoreAuthenticationManager\n"); }
    p = dlsym(h, "OBJC_CLASS_$_MEITunesStoreAuthenticator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_MEITunesStoreAuthenticator\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_MEITunesStoreAuthenticator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_MEITunesStoreAuthenticator\n"); }
    p = dlsym(h, "OBJC_CLASS_$_MEITunesStreamingMediaAsset");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_MEITunesStreamingMediaAsset\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_MEITunesStreamingMediaAsset");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_MEITunesStreamingMediaAsset\n"); }
    p = dlsym(h, "OBJC_CLASS_$_MEITunesUtilities");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_MEITunesUtilities\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_MEITunesUtilities");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_MEITunesUtilities\n"); }
    p = dlsym(h, "OBJC_CLASS_$_MEInternetAddSiteController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_MEInternetAddSiteController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_MEInternetAddSiteController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_MEInternetAddSiteController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_MEInternetDeleteSiteDialog");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_MEInternetDeleteSiteDialog\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_MEInternetDeleteSiteDialog");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_MEInternetDeleteSiteDialog\n"); }
    p = dlsym(h, "OBJC_CLASS_$_MEInternetRadioCollection");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_MEInternetRadioCollection\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_MEInternetRadioCollection");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_MEInternetRadioCollection\n"); }
    p = dlsym(h, "OBJC_CLASS_$_MEInternetRadioController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_MEInternetRadioController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_MEInternetRadioController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_MEInternetRadioController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_MEInternetRadioDataClient");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_MEInternetRadioDataClient\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_MEInternetRadioDataClient");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_MEInternetRadioDataClient\n"); }
    p = dlsym(h, "OBJC_CLASS_$_MEInternetRadioGenreController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_MEInternetRadioGenreController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_MEInternetRadioGenreController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_MEInternetRadioGenreController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_MEInternetRadioItem");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_MEInternetRadioItem\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_MEInternetRadioItem");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_MEInternetRadioItem\n"); }
    p = dlsym(h, "OBJC_CLASS_$_MEInternetTextEntryDialog");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_MEInternetTextEntryDialog\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_MEInternetTextEntryDialog");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_MEInternetTextEntryDialog\n"); }
    p = dlsym(h, "OBJC_CLASS_$_MEMusicStoreImageDecryptionAgent");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_MEMusicStoreImageDecryptionAgent\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_MEMusicStoreImageDecryptionAgent");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_MEMusicStoreImageDecryptionAgent\n"); }
    p = dlsym(h, "OBJC_CLASS_$_MEMusicStoreTrickPlayImageDecryptionAgent");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_MEMusicStoreTrickPlayImageDecryptionAgent\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_MEMusicStoreTrickPlayImageDecryptionAgent");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_MEMusicStoreTrickPlayImageDecryptionAgent\n"); }
    p = dlsym(h, "OBJC_CLASS_$_MEPowerManagementControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_MEPowerManagementControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_MEPowerManagementControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_MEPowerManagementControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_METouchRemoteDecryptionAgent");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_METouchRemoteDecryptionAgent\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_METouchRemoteDecryptionAgent");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_METouchRemoteDecryptionAgent\n"); }
    p = dlsym(h, "OBJC_CLASS_$_MEYTController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_MEYTController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_MEYTController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_MEYTController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_MEYTControllerSectionHandler");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_MEYTControllerSectionHandler\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_MEYTControllerSectionHandler");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_MEYTControllerSectionHandler\n"); }
    p = dlsym(h, "OBJC_CLASS_$_MEYTSigningAgent");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_MEYTSigningAgent\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_MEYTSigningAgent");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_MEYTSigningAgent\n"); }
    p = dlsym(h, "OBJC_CLASS_$_MOVAppliance");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_MOVAppliance\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_MOVAppliance");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_MOVAppliance\n"); }
    p = dlsym(h, "OBJC_CLASS_$_MOVTopShelfController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_MOVTopShelfController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_MOVTopShelfController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_MOVTopShelfController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_MUSICDataClientTopShelfHelper");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_MUSICDataClientTopShelfHelper\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_MUSICDataClientTopShelfHelper");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_MUSICDataClientTopShelfHelper\n"); }
    p = dlsym(h, "OBJC_CLASS_$_MUSICNEWAppliance");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_MUSICNEWAppliance\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_MUSICNEWAppliance");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_MUSICNEWAppliance\n"); }
    p = dlsym(h, "OBJC_CLASS_$_MUSICTopShelfController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_MUSICTopShelfController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_MUSICTopShelfController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_MUSICTopShelfController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_MUSICTopShelfITunesMatchView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_MUSICTopShelfITunesMatchView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_MUSICTopShelfITunesMatchView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_MUSICTopShelfITunesMatchView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_MapEntry");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_MapEntry\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_MapEntry");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_MapEntry\n"); }
    p = dlsym(h, "OBJC_CLASS_$_MediaMenuWithCopyrightView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_MediaMenuWithCopyrightView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_MediaMenuWithCopyrightView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_MediaMenuWithCopyrightView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_MovieHeaderDownloader");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_MovieHeaderDownloader\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_MovieHeaderDownloader");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_MovieHeaderDownloader\n"); }
    p = dlsym(h, "OBJC_CLASS_$_MoviesController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_MoviesController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_MoviesController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_MoviesController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_MusicAlbumsController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_MusicAlbumsController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_MusicAlbumsController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_MusicAlbumsController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_MusicArtistsController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_MusicArtistsController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_MusicArtistsController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_MusicArtistsController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_MusicCloudAdController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_MusicCloudAdController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_MusicCloudAdController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_MusicCloudAdController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_MusicCloudAdView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_MusicCloudAdView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_MusicCloudAdView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_MusicCloudAdView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_MusicCloudController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_MusicCloudController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_MusicCloudController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_MusicCloudController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_MusicCloudProgressView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_MusicCloudProgressView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_MusicCloudProgressView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_MusicCloudProgressView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_MusicCollectionController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_MusicCollectionController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_MusicCollectionController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_MusicCollectionController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_MusicContextMenuUtility");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_MusicContextMenuUtility\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_MusicContextMenuUtility");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_MusicContextMenuUtility\n"); }
    p = dlsym(h, "OBJC_CLASS_$_MusicControlFactory");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_MusicControlFactory\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_MusicControlFactory");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_MusicControlFactory\n"); }
    p = dlsym(h, "OBJC_CLASS_$_MusicController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_MusicController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_MusicController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_MusicController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_MusicGeniusController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_MusicGeniusController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_MusicGeniusController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_MusicGeniusController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_MusicGeniusMixMediaCollection");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_MusicGeniusMixMediaCollection\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_MusicGeniusMixMediaCollection");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_MusicGeniusMixMediaCollection\n"); }
    p = dlsym(h, "OBJC_CLASS_$_MusicGeniusMixSentry");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_MusicGeniusMixSentry\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_MusicGeniusMixSentry");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_MusicGeniusMixSentry\n"); }
    p = dlsym(h, "OBJC_CLASS_$_MusicGeniusMixesController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_MusicGeniusMixesController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_MusicGeniusMixesController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_MusicGeniusMixesController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_MusicGenresController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_MusicGenresController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_MusicGenresController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_MusicGenresController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_MusicItemsController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_MusicItemsController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_MusicItemsController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_MusicItemsController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_MusicMainController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_MusicMainController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_MusicMainController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_MusicMainController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_MusicSearchAgent");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_MusicSearchAgent\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_MusicSearchAgent");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_MusicSearchAgent\n"); }
    p = dlsym(h, "OBJC_CLASS_$_MusicSelectionHandler");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_MusicSelectionHandler\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_MusicSelectionHandler");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_MusicSelectionHandler\n"); }
    p = dlsym(h, "OBJC_CLASS_$_MusicUpNextController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_MusicUpNextController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_MusicUpNextController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_MusicUpNextController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_MusicVideosController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_MusicVideosController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_MusicVideosController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_MusicVideosController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_Netflix");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_Netflix\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_Netflix");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_Netflix\n"); }
    p = dlsym(h, "OBJC_CLASS_$_NetflixDevice");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_NetflixDevice\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_NetflixDevice");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_NetflixDevice\n"); }
    p = dlsym(h, "OBJC_CLASS_$_NetflixEmbeddedLocalizedStringsProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_NetflixEmbeddedLocalizedStringsProvider\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_NetflixEmbeddedLocalizedStringsProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_NetflixEmbeddedLocalizedStringsProvider\n"); }
    p = dlsym(h, "OBJC_CLASS_$_NetflixError");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_NetflixError\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_NetflixError");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_NetflixError\n"); }
    p = dlsym(h, "OBJC_CLASS_$_NetflixLocalization");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_NetflixLocalization\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_NetflixLocalization");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_NetflixLocalization\n"); }
    p = dlsym(h, "OBJC_CLASS_$_NetflixLog");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_NetflixLog\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_NetflixLog");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_NetflixLog\n"); }
    p = dlsym(h, "OBJC_CLASS_$_NetflixMedia");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_NetflixMedia\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_NetflixMedia");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_NetflixMedia\n"); }
    p = dlsym(h, "OBJC_CLASS_$_NetflixMovieAccessLogEvent");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_NetflixMovieAccessLogEvent\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_NetflixMovieAccessLogEvent");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_NetflixMovieAccessLogEvent\n"); }
    p = dlsym(h, "OBJC_CLASS_$_NetflixNrdObject");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_NetflixNrdObject\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_NetflixNrdObject");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_NetflixNrdObject\n"); }
    p = dlsym(h, "OBJC_CLASS_$_NetflixNrdObjectCallback");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_NetflixNrdObjectCallback\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_NetflixNrdObjectCallback");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_NetflixNrdObjectCallback\n"); }
    p = dlsym(h, "OBJC_CLASS_$_NetflixNrdp");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_NetflixNrdp\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_NetflixNrdp");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_NetflixNrdp\n"); }
    p = dlsym(h, "OBJC_CLASS_$_NetflixObjCAPI");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_NetflixObjCAPI\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_NetflixObjCAPI");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_NetflixObjCAPI\n"); }
    p = dlsym(h, "OBJC_CLASS_$_NetflixPlaybackManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_NetflixPlaybackManager\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_NetflixPlaybackManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_NetflixPlaybackManager\n"); }
    p = dlsym(h, "OBJC_CLASS_$_NetflixRegistration");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_NetflixRegistration\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_NetflixRegistration");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_NetflixRegistration\n"); }
    p = dlsym(h, "OBJC_CLASS_$_NetflixStorage");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_NetflixStorage\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_NetflixStorage");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_NetflixStorage\n"); }
    p = dlsym(h, "OBJC_CLASS_$_NetflixSubtitle");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_NetflixSubtitle\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_NetflixSubtitle");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_NetflixSubtitle\n"); }
    p = dlsym(h, "OBJC_CLASS_$_NetflixTopHeader");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_NetflixTopHeader\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_NetflixTopHeader");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_NetflixTopHeader\n"); }
    p = dlsym(h, "OBJC_CLASS_$_NfhlsProtocol");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_NfhlsProtocol\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_NfhlsProtocol");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_NfhlsProtocol\n"); }
    p = dlsym(h, "OBJC_CLASS_$_NoImageURLCache");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_NoImageURLCache\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_NoImageURLCache");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_NoImageURLCache\n"); }
    p = dlsym(h, "OBJC_CLASS_$_OBBundle");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_OBBundle\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_OBBundle");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_OBBundle\n"); }
    p = dlsym(h, "OBJC_CLASS_$_OBBundleManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_OBBundleManager\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_OBBundleManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_OBBundleManager\n"); }
    p = dlsym(h, "OBJC_CLASS_$_OBCapabilities");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_OBCapabilities\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_OBCapabilities");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_OBCapabilities\n"); }
    p = dlsym(h, "OBJC_CLASS_$_OBFlow");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_OBFlow\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_OBFlow");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_OBFlow\n"); }
    p = dlsym(h, "OBJC_CLASS_$_OBPrivacyFlow");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_OBPrivacyFlow\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_OBPrivacyFlow");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_OBPrivacyFlow\n"); }
    p = dlsym(h, "OBJC_CLASS_$_OBPrivacyLinkButton");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_OBPrivacyLinkButton\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_OBPrivacyLinkButton");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_OBPrivacyLinkButton\n"); }
    p = dlsym(h, "OBJC_CLASS_$_OBPrivacyLinkController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_OBPrivacyLinkController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_OBPrivacyLinkController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_OBPrivacyLinkController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_OBPrivacyLinkController_atv");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_OBPrivacyLinkController_atv\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_OBPrivacyLinkController_atv");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_OBPrivacyLinkController_atv\n"); }
    p = dlsym(h, "OBJC_CLASS_$_OBPrivacyLinkView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_OBPrivacyLinkView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_OBPrivacyLinkView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_OBPrivacyLinkView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_OBPrivacySplashController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_OBPrivacySplashController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_OBPrivacySplashController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_OBPrivacySplashController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_OBPrivacySplashText");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_OBPrivacySplashText\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_OBPrivacySplashText");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_OBPrivacySplashText\n"); }
    p = dlsym(h, "OBJC_CLASS_$_OBSplashBullet");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_OBSplashBullet\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_OBSplashBullet");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_OBSplashBullet\n"); }
    p = dlsym(h, "OBJC_CLASS_$_OBSplashContent");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_OBSplashContent\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_OBSplashContent");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_OBSplashContent\n"); }
    p = dlsym(h, "OBJC_CLASS_$_OBSplashSelectionHandler");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_OBSplashSelectionHandler\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_OBSplashSelectionHandler");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_OBSplashSelectionHandler\n"); }
    p = dlsym(h, "OBJC_CLASS_$_OBUtilities");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_OBUtilities\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_OBUtilities");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_OBUtilities\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ParsableExecutable");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ParsableExecutable\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ParsableExecutable");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ParsableExecutable\n"); }
    p = dlsym(h, "OBJC_CLASS_$_PeriodicWorkerTask");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_PeriodicWorkerTask\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_PeriodicWorkerTask");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_PeriodicWorkerTask\n"); }
    p = dlsym(h, "OBJC_CLASS_$_PeriodicWorkerThread");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_PeriodicWorkerThread\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_PeriodicWorkerThread");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_PeriodicWorkerThread\n"); }
    p = dlsym(h, "OBJC_CLASS_$_PhotoController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_PhotoController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_PhotoController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_PhotoController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_PhotoQueryController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_PhotoQueryController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_PhotoQueryController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_PhotoQueryController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_PlayHandler");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_PlayHandler\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_PlayHandler");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_PlayHandler\n"); }
    p = dlsym(h, "OBJC_CLASS_$_PlaylistBuilder");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_PlaylistBuilder\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_PlaylistBuilder");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_PlaylistBuilder\n"); }
    p = dlsym(h, "OBJC_CLASS_$_PlaylistsController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_PlaylistsController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_PlaylistsController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_PlaylistsController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_PlistResources");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_PlistResources\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_PlistResources");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_PlistResources\n"); }
    p = dlsym(h, "OBJC_CLASS_$_PodcastsMainController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_PodcastsMainController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_PodcastsMainController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_PodcastsMainController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_PoppingController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_PoppingController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_PoppingController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_PoppingController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_RUIPhloatoArtLoader");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_RUIPhloatoArtLoader\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_RUIPhloatoArtLoader");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_RUIPhloatoArtLoader\n"); }
    p = dlsym(h, "OBJC_CLASS_$_RUIPhloatoControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_RUIPhloatoControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_RUIPhloatoControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_RUIPhloatoControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_RUIPhloatoPlane");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_RUIPhloatoPlane\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_RUIPhloatoPlane");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_RUIPhloatoPlane\n"); }
    p = dlsym(h, "OBJC_CLASS_$_RUIPhloatoPlaneDelegate");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_RUIPhloatoPlaneDelegate\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_RUIPhloatoPlaneDelegate");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_RUIPhloatoPlaneDelegate\n"); }
    p = dlsym(h, "OBJC_CLASS_$_RUIPhloatoScreenSaver");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_RUIPhloatoScreenSaver\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_RUIPhloatoScreenSaver");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_RUIPhloatoScreenSaver\n"); }
    p = dlsym(h, "OBJC_CLASS_$_RUIRatingInfoDatabase");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_RUIRatingInfoDatabase\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_RUIRatingInfoDatabase");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_RUIRatingInfoDatabase\n"); }
    p = dlsym(h, "OBJC_CLASS_$_RUIRetailControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_RUIRetailControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_RUIRetailControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_RUIRetailControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_RUIRetailMovieAsset");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_RUIRetailMovieAsset\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_RUIRetailMovieAsset");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_RUIRetailMovieAsset\n"); }
    p = dlsym(h, "OBJC_CLASS_$_RUIRetailScreenSaver");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_RUIRetailScreenSaver\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_RUIRetailScreenSaver");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_RUIRetailScreenSaver\n"); }
    p = dlsym(h, "OBJC_CLASS_$_RUISlideShowControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_RUISlideShowControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_RUISlideShowControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_RUISlideShowControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_RUISlideshowScreenSaver");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_RUISlideshowScreenSaver\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_RUISlideshowScreenSaver");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_RUISlideshowScreenSaver\n"); }
    p = dlsym(h, "OBJC_CLASS_$_RUITrailersProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_RUITrailersProvider\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_RUITrailersProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_RUITrailersProvider\n"); }
    p = dlsym(h, "OBJC_CLASS_$_RUIYTAccountFeaturesController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_RUIYTAccountFeaturesController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_RUIYTAccountFeaturesController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_RUIYTAccountFeaturesController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_RUIYTAccountFeaturesCustomSectionHandler");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_RUIYTAccountFeaturesCustomSectionHandler\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_RUIYTAccountFeaturesCustomSectionHandler");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_RUIYTAccountFeaturesCustomSectionHandler\n"); }
    p = dlsym(h, "OBJC_CLASS_$_RUIYTAccountsMenuController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_RUIYTAccountsMenuController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_RUIYTAccountsMenuController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_RUIYTAccountsMenuController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_RUIYTAssetsInfo");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_RUIYTAssetsInfo\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_RUIYTAssetsInfo");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_RUIYTAssetsInfo\n"); }
    p = dlsym(h, "OBJC_CLASS_$_RUIYTAssetsListSection");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_RUIYTAssetsListSection\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_RUIYTAssetsListSection");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_RUIYTAssetsListSection\n"); }
    p = dlsym(h, "OBJC_CLASS_$_RUIYTAuthenticationManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_RUIYTAuthenticationManager\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_RUIYTAuthenticationManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_RUIYTAuthenticationManager\n"); }
    p = dlsym(h, "OBJC_CLASS_$_RUIYTAuthenticationResources");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_RUIYTAuthenticationResources\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_RUIYTAuthenticationResources");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_RUIYTAuthenticationResources\n"); }
    p = dlsym(h, "OBJC_CLASS_$_RUIYTAuthenticator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_RUIYTAuthenticator\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_RUIYTAuthenticator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_RUIYTAuthenticator\n"); }
    p = dlsym(h, "OBJC_CLASS_$_RUIYTByAuthorDocumentSpec");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_RUIYTByAuthorDocumentSpec\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_RUIYTByAuthorDocumentSpec");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_RUIYTByAuthorDocumentSpec\n"); }
    p = dlsym(h, "OBJC_CLASS_$_RUIYTCenteredImageLayer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_RUIYTCenteredImageLayer\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_RUIYTCenteredImageLayer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_RUIYTCenteredImageLayer\n"); }
    p = dlsym(h, "OBJC_CLASS_$_RUIYTCenteredMenuView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_RUIYTCenteredMenuView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_RUIYTCenteredMenuView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_RUIYTCenteredMenuView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_RUIYTCollection");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_RUIYTCollection\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_RUIYTCollection");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_RUIYTCollection\n"); }
    p = dlsym(h, "OBJC_CLASS_$_RUIYTCollectionListSectionHandler");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_RUIYTCollectionListSectionHandler\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_RUIYTCollectionListSectionHandler");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_RUIYTCollectionListSectionHandler\n"); }
    p = dlsym(h, "OBJC_CLASS_$_RUIYTCollectionsDocument");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_RUIYTCollectionsDocument\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_RUIYTCollectionsDocument");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_RUIYTCollectionsDocument\n"); }
    p = dlsym(h, "OBJC_CLASS_$_RUIYTCollectionsDocumentSpec");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_RUIYTCollectionsDocumentSpec\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_RUIYTCollectionsDocumentSpec");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_RUIYTCollectionsDocumentSpec\n"); }
    p = dlsym(h, "OBJC_CLASS_$_RUIYTCommunityFeaturesDocument");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_RUIYTCommunityFeaturesDocument\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_RUIYTCommunityFeaturesDocument");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_RUIYTCommunityFeaturesDocument\n"); }
    p = dlsym(h, "OBJC_CLASS_$_RUIYTCustomListSection");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_RUIYTCustomListSection\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_RUIYTCustomListSection");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_RUIYTCustomListSection\n"); }
    p = dlsym(h, "OBJC_CLASS_$_RUIYTDocument");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_RUIYTDocument\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_RUIYTDocument");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_RUIYTDocument\n"); }
    p = dlsym(h, "OBJC_CLASS_$_RUIYTDocumentLoader");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_RUIYTDocumentLoader\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_RUIYTDocumentLoader");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_RUIYTDocumentLoader\n"); }
    p = dlsym(h, "OBJC_CLASS_$_RUIYTFavoritesManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_RUIYTFavoritesManager\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_RUIYTFavoritesManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_RUIYTFavoritesManager\n"); }
    p = dlsym(h, "OBJC_CLASS_$_RUIYTFlagInappropriateDocument");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_RUIYTFlagInappropriateDocument\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_RUIYTFlagInappropriateDocument");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_RUIYTFlagInappropriateDocument\n"); }
    p = dlsym(h, "OBJC_CLASS_$_RUIYTHeaderWithTabControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_RUIYTHeaderWithTabControl\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_RUIYTHeaderWithTabControl");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_RUIYTHeaderWithTabControl\n"); }
    p = dlsym(h, "OBJC_CLASS_$_RUIYTHistoryController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_RUIYTHistoryController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_RUIYTHistoryController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_RUIYTHistoryController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_RUIYTHistoryControllerSectionHandler");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_RUIYTHistoryControllerSectionHandler\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_RUIYTHistoryControllerSectionHandler");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_RUIYTHistoryControllerSectionHandler\n"); }
    p = dlsym(h, "OBJC_CLASS_$_RUIYTHistoryManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_RUIYTHistoryManager\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_RUIYTHistoryManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_RUIYTHistoryManager\n"); }
    p = dlsym(h, "OBJC_CLASS_$_RUIYTListCacheItem");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_RUIYTListCacheItem\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_RUIYTListCacheItem");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_RUIYTListCacheItem\n"); }
    p = dlsym(h, "OBJC_CLASS_$_RUIYTListDataSourceAspect");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_RUIYTListDataSourceAspect\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_RUIYTListDataSourceAspect");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_RUIYTListDataSourceAspect\n"); }
    p = dlsym(h, "OBJC_CLASS_$_RUIYTListSection");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_RUIYTListSection\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_RUIYTListSection");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_RUIYTListSection\n"); }
    p = dlsym(h, "OBJC_CLASS_$_RUIYTLoadWaitController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_RUIYTLoadWaitController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_RUIYTLoadWaitController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_RUIYTLoadWaitController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_RUIYTMarkFavoriteDocument");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_RUIYTMarkFavoriteDocument\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_RUIYTMarkFavoriteDocument");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_RUIYTMarkFavoriteDocument\n"); }
    p = dlsym(h, "OBJC_CLASS_$_RUIYTMediaAsset");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_RUIYTMediaAsset\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_RUIYTMediaAsset");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_RUIYTMediaAsset\n"); }
    p = dlsym(h, "OBJC_CLASS_$_RUIYTOAuth2Account");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_RUIYTOAuth2Account\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_RUIYTOAuth2Account");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_RUIYTOAuth2Account\n"); }
    p = dlsym(h, "OBJC_CLASS_$_RUIYTOAuth2DPAuthenticator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_RUIYTOAuth2DPAuthenticator\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_RUIYTOAuth2DPAuthenticator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_RUIYTOAuth2DPAuthenticator\n"); }
    p = dlsym(h, "OBJC_CLASS_$_RUIYTOptionsMenuController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_RUIYTOptionsMenuController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_RUIYTOptionsMenuController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_RUIYTOptionsMenuController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_RUIYTPlayerMemento");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_RUIYTPlayerMemento\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_RUIYTPlayerMemento");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_RUIYTPlayerMemento\n"); }
    p = dlsym(h, "OBJC_CLASS_$_RUIYTPlaylistSearchDocumentSpec");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_RUIYTPlaylistSearchDocumentSpec\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_RUIYTPlaylistSearchDocumentSpec");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_RUIYTPlaylistSearchDocumentSpec\n"); }
    p = dlsym(h, "OBJC_CLASS_$_RUIYTRateDocument");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_RUIYTRateDocument\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_RUIYTRateDocument");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_RUIYTRateDocument\n"); }
    p = dlsym(h, "OBJC_CLASS_$_RUIYTRateMenuController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_RUIYTRateMenuController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_RUIYTRateMenuController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_RUIYTRateMenuController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_RUIYTRelatedDocumentSpec");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_RUIYTRelatedDocumentSpec\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_RUIYTRelatedDocumentSpec");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_RUIYTRelatedDocumentSpec\n"); }
    p = dlsym(h, "OBJC_CLASS_$_RUIYTRelatedVideosControllerSectionHandler");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_RUIYTRelatedVideosControllerSectionHandler\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_RUIYTRelatedVideosControllerSectionHandler");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_RUIYTRelatedVideosControllerSectionHandler\n"); }
    p = dlsym(h, "OBJC_CLASS_$_RUIYTRelatedVideosSubMenuController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_RUIYTRelatedVideosSubMenuController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_RUIYTRelatedVideosSubMenuController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_RUIYTRelatedVideosSubMenuController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_RUIYTRemoveAccountMenuController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_RUIYTRemoveAccountMenuController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_RUIYTRemoveAccountMenuController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_RUIYTRemoveAccountMenuController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_RUIYTRemoveFavoriteDocument");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_RUIYTRemoveFavoriteDocument\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_RUIYTRemoveFavoriteDocument");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_RUIYTRemoveFavoriteDocument\n"); }
    p = dlsym(h, "OBJC_CLASS_$_RUIYTSearchController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_RUIYTSearchController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_RUIYTSearchController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_RUIYTSearchController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_RUIYTSearchResultsLoader");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_RUIYTSearchResultsLoader\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_RUIYTSearchResultsLoader");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_RUIYTSearchResultsLoader\n"); }
    p = dlsym(h, "OBJC_CLASS_$_RUIYTSearchTermInfo");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_RUIYTSearchTermInfo\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_RUIYTSearchTermInfo");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_RUIYTSearchTermInfo\n"); }
    p = dlsym(h, "OBJC_CLASS_$_RUIYTSortableVideosSubMenuController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_RUIYTSortableVideosSubMenuController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_RUIYTSortableVideosSubMenuController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_RUIYTSortableVideosSubMenuController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_RUIYTUserPasswordAccount");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_RUIYTUserPasswordAccount\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_RUIYTUserPasswordAccount");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_RUIYTUserPasswordAccount\n"); }
    p = dlsym(h, "OBJC_CLASS_$_RUIYTVideoCollectionDocumentSpec");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_RUIYTVideoCollectionDocumentSpec\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_RUIYTVideoCollectionDocumentSpec");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_RUIYTVideoCollectionDocumentSpec\n"); }
    p = dlsym(h, "OBJC_CLASS_$_RUIYTVideoFetchDocumentSpec");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_RUIYTVideoFetchDocumentSpec\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_RUIYTVideoFetchDocumentSpec");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_RUIYTVideoFetchDocumentSpec\n"); }
    p = dlsym(h, "OBJC_CLASS_$_RUIYTVideoListSectionHandler");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_RUIYTVideoListSectionHandler\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_RUIYTVideoListSectionHandler");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_RUIYTVideoListSectionHandler\n"); }
    p = dlsym(h, "OBJC_CLASS_$_RUIYTVideoPlaybackAspect");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_RUIYTVideoPlaybackAspect\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_RUIYTVideoPlaybackAspect");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_RUIYTVideoPlaybackAspect\n"); }
    p = dlsym(h, "OBJC_CLASS_$_RUIYTVideoSearchDocumentSpec");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_RUIYTVideoSearchDocumentSpec\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_RUIYTVideoSearchDocumentSpec");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_RUIYTVideoSearchDocumentSpec\n"); }
    p = dlsym(h, "OBJC_CLASS_$_RUIYTVideosCollectionMenuController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_RUIYTVideosCollectionMenuController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_RUIYTVideosCollectionMenuController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_RUIYTVideosCollectionMenuController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_RUIYTVideosDocument");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_RUIYTVideosDocument\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_RUIYTVideosDocument");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_RUIYTVideosDocument\n"); }
    p = dlsym(h, "OBJC_CLASS_$_RUIYTVideosDocumentSpec");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_RUIYTVideosDocumentSpec\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_RUIYTVideosDocumentSpec");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_RUIYTVideosDocumentSpec\n"); }
    p = dlsym(h, "OBJC_CLASS_$_RUIYTVideosSubMenuController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_RUIYTVideosSubMenuController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_RUIYTVideosSubMenuController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_RUIYTVideosSubMenuController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_RUIYTVideosTestController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_RUIYTVideosTestController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_RUIYTVideosTestController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_RUIYTVideosTestController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_RUIYTVideosTimeFilterInfo");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_RUIYTVideosTimeFilterInfo\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_RUIYTVideosTimeFilterInfo");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_RUIYTVideosTimeFilterInfo\n"); }
    p = dlsym(h, "OBJC_CLASS_$_RadioItemLookupRequestUtilities");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_RadioItemLookupRequestUtilities\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_RadioItemLookupRequestUtilities");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_RadioItemLookupRequestUtilities\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ReconfigurePeriodicWorkerTask");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ReconfigurePeriodicWorkerTask\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ReconfigurePeriodicWorkerTask");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ReconfigurePeriodicWorkerTask\n"); }
    p = dlsym(h, "OBJC_CLASS_$_RentalsController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_RentalsController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_RentalsController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_RentalsController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SBJsonParser");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SBJsonParser\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SBJsonParser");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SBJsonParser\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SBJsonStreamParser");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SBJsonStreamParser\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SBJsonStreamParser");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SBJsonStreamParser\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SBJsonStreamParserAccumulator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SBJsonStreamParserAccumulator\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SBJsonStreamParserAccumulator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SBJsonStreamParserAccumulator\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SBJsonStreamParserAdapter");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SBJsonStreamParserAdapter\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SBJsonStreamParserAdapter");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SBJsonStreamParserAdapter\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SBJsonStreamParserState");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SBJsonStreamParserState\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SBJsonStreamParserState");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SBJsonStreamParserState\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SBJsonStreamParserStateArrayGotValue");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SBJsonStreamParserStateArrayGotValue\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SBJsonStreamParserStateArrayGotValue");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SBJsonStreamParserStateArrayGotValue\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SBJsonStreamParserStateArrayNeedValue");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SBJsonStreamParserStateArrayNeedValue\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SBJsonStreamParserStateArrayNeedValue");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SBJsonStreamParserStateArrayNeedValue\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SBJsonStreamParserStateArrayStart");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SBJsonStreamParserStateArrayStart\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SBJsonStreamParserStateArrayStart");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SBJsonStreamParserStateArrayStart\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SBJsonStreamParserStateComplete");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SBJsonStreamParserStateComplete\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SBJsonStreamParserStateComplete");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SBJsonStreamParserStateComplete\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SBJsonStreamParserStateError");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SBJsonStreamParserStateError\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SBJsonStreamParserStateError");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SBJsonStreamParserStateError\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SBJsonStreamParserStateObjectGotKey");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SBJsonStreamParserStateObjectGotKey\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SBJsonStreamParserStateObjectGotKey");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SBJsonStreamParserStateObjectGotKey\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SBJsonStreamParserStateObjectGotValue");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SBJsonStreamParserStateObjectGotValue\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SBJsonStreamParserStateObjectGotValue");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SBJsonStreamParserStateObjectGotValue\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SBJsonStreamParserStateObjectNeedKey");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SBJsonStreamParserStateObjectNeedKey\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SBJsonStreamParserStateObjectNeedKey");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SBJsonStreamParserStateObjectNeedKey\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SBJsonStreamParserStateObjectSeparator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SBJsonStreamParserStateObjectSeparator\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SBJsonStreamParserStateObjectSeparator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SBJsonStreamParserStateObjectSeparator\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SBJsonStreamParserStateObjectStart");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SBJsonStreamParserStateObjectStart\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SBJsonStreamParserStateObjectStart");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SBJsonStreamParserStateObjectStart\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SBJsonStreamParserStateStart");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SBJsonStreamParserStateStart\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SBJsonStreamParserStateStart");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SBJsonStreamParserStateStart\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SBJsonStreamWriter");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SBJsonStreamWriter\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SBJsonStreamWriter");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SBJsonStreamWriter\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SBJsonStreamWriterAccumulator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SBJsonStreamWriterAccumulator\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SBJsonStreamWriterAccumulator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SBJsonStreamWriterAccumulator\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SBJsonStreamWriterState");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SBJsonStreamWriterState\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SBJsonStreamWriterState");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SBJsonStreamWriterState\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SBJsonStreamWriterStateArrayStart");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SBJsonStreamWriterStateArrayStart\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SBJsonStreamWriterStateArrayStart");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SBJsonStreamWriterStateArrayStart\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SBJsonStreamWriterStateArrayValue");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SBJsonStreamWriterStateArrayValue\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SBJsonStreamWriterStateArrayValue");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SBJsonStreamWriterStateArrayValue\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SBJsonStreamWriterStateComplete");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SBJsonStreamWriterStateComplete\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SBJsonStreamWriterStateComplete");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SBJsonStreamWriterStateComplete\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SBJsonStreamWriterStateError");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SBJsonStreamWriterStateError\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SBJsonStreamWriterStateError");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SBJsonStreamWriterStateError\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SBJsonStreamWriterStateObjectKey");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SBJsonStreamWriterStateObjectKey\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SBJsonStreamWriterStateObjectKey");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SBJsonStreamWriterStateObjectKey\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SBJsonStreamWriterStateObjectStart");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SBJsonStreamWriterStateObjectStart\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SBJsonStreamWriterStateObjectStart");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SBJsonStreamWriterStateObjectStart\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SBJsonStreamWriterStateObjectValue");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SBJsonStreamWriterStateObjectValue\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SBJsonStreamWriterStateObjectValue");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SBJsonStreamWriterStateObjectValue\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SBJsonStreamWriterStateStart");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SBJsonStreamWriterStateStart\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SBJsonStreamWriterStateStart");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SBJsonStreamWriterStateStart\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SBJsonTokeniser");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SBJsonTokeniser\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SBJsonTokeniser");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SBJsonTokeniser\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SBJsonUTF8Stream");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SBJsonUTF8Stream\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SBJsonUTF8Stream");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SBJsonUTF8Stream\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SBJsonWriter");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SBJsonWriter\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SBJsonWriter");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SBJsonWriter\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SETTINGSAppliance");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SETTINGSAppliance\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SETTINGSAppliance");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SETTINGSAppliance\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SETTINGSApplianceController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SETTINGSApplianceController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SETTINGSApplianceController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SETTINGSApplianceController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SETTINGSTopShelfController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SETTINGSTopShelfController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SETTINGSTopShelfController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SETTINGSTopShelfController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ScrollAnimationDelegate");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ScrollAnimationDelegate\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ScrollAnimationDelegate");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ScrollAnimationDelegate\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SettingsAboutViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SettingsAboutViewController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SettingsAboutViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SettingsAboutViewController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SettingsAccessibilityCaptioningColorController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SettingsAccessibilityCaptioningColorController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SettingsAccessibilityCaptioningColorController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SettingsAccessibilityCaptioningColorController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SettingsAccessibilityCaptioningCustomStylesController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SettingsAccessibilityCaptioningCustomStylesController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SettingsAccessibilityCaptioningCustomStylesController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SettingsAccessibilityCaptioningCustomStylesController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SettingsAccessibilityCaptioningEditStyleController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SettingsAccessibilityCaptioningEditStyleController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SettingsAccessibilityCaptioningEditStyleController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SettingsAccessibilityCaptioningEditStyleController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SettingsAccessibilityCaptioningFontController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SettingsAccessibilityCaptioningFontController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SettingsAccessibilityCaptioningFontController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SettingsAccessibilityCaptioningFontController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SettingsAccessibilityCaptioningOpacityController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SettingsAccessibilityCaptioningOpacityController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SettingsAccessibilityCaptioningOpacityController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SettingsAccessibilityCaptioningOpacityController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SettingsAccessibilityCaptioningSizeController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SettingsAccessibilityCaptioningSizeController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SettingsAccessibilityCaptioningSizeController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SettingsAccessibilityCaptioningSizeController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SettingsAccessibilityCaptioningStyleBaseController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SettingsAccessibilityCaptioningStyleBaseController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SettingsAccessibilityCaptioningStyleBaseController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SettingsAccessibilityCaptioningStyleBaseController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SettingsAccessibilityCaptioningStylesController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SettingsAccessibilityCaptioningStylesController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SettingsAccessibilityCaptioningStylesController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SettingsAccessibilityCaptioningStylesController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SettingsAccessibilityCaptioningTextEdgeController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SettingsAccessibilityCaptioningTextEdgeController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SettingsAccessibilityCaptioningTextEdgeController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SettingsAccessibilityCaptioningTextEdgeController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SettingsAccessibilityCaptioningTextHighlightController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SettingsAccessibilityCaptioningTextHighlightController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SettingsAccessibilityCaptioningTextHighlightController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SettingsAccessibilityCaptioningTextHighlightController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SettingsAccessibilityController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SettingsAccessibilityController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SettingsAccessibilityController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SettingsAccessibilityController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SettingsAdTrackingOptionsViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SettingsAdTrackingOptionsViewController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SettingsAdTrackingOptionsViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SettingsAdTrackingOptionsViewController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SettingsAirPlayCRDModeController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SettingsAirPlayCRDModeController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SettingsAirPlayCRDModeController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SettingsAirPlayCRDModeController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SettingsAirPlayCRDModePreviewView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SettingsAirPlayCRDModePreviewView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SettingsAirPlayCRDModePreviewView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SettingsAirPlayCRDModePreviewView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SettingsAirPlaySecurityController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SettingsAirPlaySecurityController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SettingsAirPlaySecurityController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SettingsAirPlaySecurityController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SettingsAirtunesController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SettingsAirtunesController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SettingsAirtunesController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SettingsAirtunesController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SettingsAlbumArtworkConnectorController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SettingsAlbumArtworkConnectorController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SettingsAlbumArtworkConnectorController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SettingsAlbumArtworkConnectorController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SettingsAnalyticsViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SettingsAnalyticsViewController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SettingsAnalyticsViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SettingsAnalyticsViewController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SettingsAppViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SettingsAppViewController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SettingsAppViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SettingsAppViewController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SettingsAudioLanguageController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SettingsAudioLanguageController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SettingsAudioLanguageController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SettingsAudioLanguageController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SettingsAudioVideoController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SettingsAudioVideoController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SettingsAudioVideoController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SettingsAudioVideoController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SettingsBluetoothController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SettingsBluetoothController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SettingsBluetoothController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SettingsBluetoothController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SettingsCaptionSubtitlePreviewView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SettingsCaptionSubtitlePreviewView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SettingsCaptionSubtitlePreviewView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SettingsCaptionSubtitlePreviewView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SettingsChooseAlbumArtworkController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SettingsChooseAlbumArtworkController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SettingsChooseAlbumArtworkController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SettingsChooseAlbumArtworkController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SettingsChoosePhotosController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SettingsChoosePhotosController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SettingsChoosePhotosController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SettingsChoosePhotosController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SettingsChooseScreenSaverPhotosController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SettingsChooseScreenSaverPhotosController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SettingsChooseScreenSaverPhotosController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SettingsChooseScreenSaverPhotosController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SettingsChooseSinglePhotoController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SettingsChooseSinglePhotoController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SettingsChooseSinglePhotoController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SettingsChooseSinglePhotoController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SettingsComputersController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SettingsComputersController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SettingsComputersController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SettingsComputersController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SettingsComputersDiagnosticsBrowserController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SettingsComputersDiagnosticsBrowserController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SettingsComputersDiagnosticsBrowserController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SettingsComputersDiagnosticsBrowserController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SettingsComputersDiagnosticsController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SettingsComputersDiagnosticsController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SettingsComputersDiagnosticsController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SettingsComputersDiagnosticsController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SettingsComputersDiagnosticsView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SettingsComputersDiagnosticsView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SettingsComputersDiagnosticsView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SettingsComputersDiagnosticsView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SettingsDeviceNameController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SettingsDeviceNameController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SettingsDeviceNameController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SettingsDeviceNameController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SettingsGeneralViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SettingsGeneralViewController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SettingsGeneralViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SettingsGeneralViewController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SettingsHDMIOutputController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SettingsHDMIOutputController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SettingsHDMIOutputController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SettingsHDMIOutputController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SettingsLegalController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SettingsLegalController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SettingsLegalController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SettingsLegalController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SettingsMainMenuViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SettingsMainMenuViewController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SettingsMainMenuViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SettingsMainMenuViewController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SettingsMetadataView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SettingsMetadataView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SettingsMetadataView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SettingsMetadataView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SettingsNetworkAdvancedViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SettingsNetworkAdvancedViewController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SettingsNetworkAdvancedViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SettingsNetworkAdvancedViewController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SettingsNetworkAutoModeViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SettingsNetworkAutoModeViewController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SettingsNetworkAutoModeViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SettingsNetworkAutoModeViewController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SettingsNetworkSpeedTestView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SettingsNetworkSpeedTestView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SettingsNetworkSpeedTestView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SettingsNetworkSpeedTestView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SettingsNetworkSpeedTestViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SettingsNetworkSpeedTestViewController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SettingsNetworkSpeedTestViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SettingsNetworkSpeedTestViewController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SettingsNetworkViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SettingsNetworkViewController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SettingsNetworkViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SettingsNetworkViewController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SettingsPINEntryView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SettingsPINEntryView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SettingsPINEntryView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SettingsPINEntryView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SettingsParentalControlsViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SettingsParentalControlsViewController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SettingsParentalControlsViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SettingsParentalControlsViewController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SettingsParentalLocaleControlFactory");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SettingsParentalLocaleControlFactory\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SettingsParentalLocaleControlFactory");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SettingsParentalLocaleControlFactory\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SettingsParentalLocaleController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SettingsParentalLocaleController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SettingsParentalLocaleController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SettingsParentalLocaleController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SettingsParentalLocaleProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SettingsParentalLocaleProvider\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SettingsParentalLocaleProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SettingsParentalLocaleProvider\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SettingsParentalPhotoStreamController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SettingsParentalPhotoStreamController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SettingsParentalPhotoStreamController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SettingsParentalPhotoStreamController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SettingsPreviewView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SettingsPreviewView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SettingsPreviewView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SettingsPreviewView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SettingsProfileInspectorViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SettingsProfileInspectorViewController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SettingsProfileInspectorViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SettingsProfileInspectorViewController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SettingsProfileInstallationController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SettingsProfileInstallationController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SettingsProfileInstallationController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SettingsProfileInstallationController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SettingsProfileViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SettingsProfileViewController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SettingsProfileViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SettingsProfileViewController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SettingsRemoteControlController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SettingsRemoteControlController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SettingsRemoteControlController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SettingsRemoteControlController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SettingsRemoteLearningController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SettingsRemoteLearningController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SettingsRemoteLearningController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SettingsRemoteLearningController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SettingsRemoteLearningView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SettingsRemoteLearningView\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SettingsRemoteLearningView");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SettingsRemoteLearningView\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SettingsResetController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SettingsResetController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SettingsResetController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SettingsResetController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SettingsRestoreController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SettingsRestoreController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SettingsRestoreController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SettingsRestoreController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SettingsSWUController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SettingsSWUController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SettingsSWUController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SettingsSWUController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SettingsScreenSaverController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SettingsScreenSaverController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SettingsScreenSaverController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SettingsScreenSaverController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SettingsScreenSaverDetailsController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SettingsScreenSaverDetailsController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SettingsScreenSaverDetailsController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SettingsScreenSaverDetailsController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SettingsScreenSaverThemeItem");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SettingsScreenSaverThemeItem\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SettingsScreenSaverThemeItem");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SettingsScreenSaverThemeItem\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SettingsStoreAccountManagementController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SettingsStoreAccountManagementController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SettingsStoreAccountManagementController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SettingsStoreAccountManagementController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SettingsStoreFrontViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SettingsStoreFrontViewController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SettingsStoreFrontViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SettingsStoreFrontViewController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SettingsStoreOptionsViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SettingsStoreOptionsViewController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SettingsStoreOptionsViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SettingsStoreOptionsViewController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SettingsSubtitleLanguageController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SettingsSubtitleLanguageController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SettingsSubtitleLanguageController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SettingsSubtitleLanguageController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SettingsTVAppViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SettingsTVAppViewController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SettingsTVAppViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SettingsTVAppViewController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SettingsTVResolutionController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SettingsTVResolutionController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SettingsTVResolutionController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SettingsTVResolutionController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SettingsTimeZoneController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SettingsTimeZoneController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SettingsTimeZoneController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SettingsTimeZoneController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SettingsTouchRemotePINEntryController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SettingsTouchRemotePINEntryController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SettingsTouchRemotePINEntryController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SettingsTouchRemotePINEntryController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SettingsTroubleshootingController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SettingsTroubleshootingController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SettingsTroubleshootingController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SettingsTroubleshootingController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SettingsUtilities");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SettingsUtilities\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SettingsUtilities");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SettingsUtilities\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SettingsiCloudOptionsViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SettingsiCloudOptionsViewController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SettingsiCloudOptionsViewController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SettingsiCloudOptionsViewController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ShowsController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ShowsController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ShowsController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ShowsController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SidxEntry");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SidxEntry\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SidxEntry");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SidxEntry\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SsixEntry");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SsixEntry\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SsixEntry");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SsixEntry\n"); }
    p = dlsym(h, "OBJC_CLASS_$_StreamData");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_StreamData\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_StreamData");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_StreamData\n"); }
    p = dlsym(h, "OBJC_CLASS_$_StreamHeader");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_StreamHeader\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_StreamHeader");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_StreamHeader\n"); }
    p = dlsym(h, "OBJC_CLASS_$_SwapOnPushController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_SwapOnPushController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_SwapOnPushController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_SwapOnPushController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_TCPServer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_TCPServer\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_TCPServer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_TCPServer\n"); }
    p = dlsym(h, "OBJC_CLASS_$_TVAPPTopShelfController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_TVAPPTopShelfController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_TVAPPTopShelfController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_TVAPPTopShelfController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_TVAppTopShelfData");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_TVAppTopShelfData\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_TVAppTopShelfData");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_TVAppTopShelfData\n"); }
    p = dlsym(h, "OBJC_CLASS_$_TVAppTopShelfItem");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_TVAppTopShelfItem\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_TVAppTopShelfItem");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_TVAppTopShelfItem\n"); }
    p = dlsym(h, "OBJC_CLASS_$_TVAppliance");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_TVAppliance\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_TVAppliance");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_TVAppliance\n"); }
    p = dlsym(h, "OBJC_CLASS_$_TVPeripheralManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_TVPeripheralManager\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_TVPeripheralManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_TVPeripheralManager\n"); }
    p = dlsym(h, "OBJC_CLASS_$_TVPeripheralManagerUI");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_TVPeripheralManagerUI\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_TVPeripheralManagerUI");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_TVPeripheralManagerUI\n"); }
    p = dlsym(h, "OBJC_CLASS_$_TVTopShelfController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_TVTopShelfController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_TVTopShelfController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_TVTopShelfController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_TransportPacket");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_TransportPacket\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_TransportPacket");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_TransportPacket\n"); }
    p = dlsym(h, "OBJC_CLASS_$_UPACTextEntryDelegate");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_UPACTextEntryDelegate\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_UPACTextEntryDelegate");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_UPACTextEntryDelegate\n"); }
    p = dlsym(h, "OBJC_CLASS_$_UWLErrorResponse");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_UWLErrorResponse\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_UWLErrorResponse");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_UWLErrorResponse\n"); }
    p = dlsym(h, "OBJC_CLASS_$_UWLLiveActivityEvent");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_UWLLiveActivityEvent\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_UWLLiveActivityEvent");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_UWLLiveActivityEvent\n"); }
    p = dlsym(h, "OBJC_CLASS_$_UWLLiveActivityEventChannel");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_UWLLiveActivityEventChannel\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_UWLLiveActivityEventChannel");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_UWLLiveActivityEventChannel\n"); }
    p = dlsym(h, "OBJC_CLASS_$_UWLLiveActivityEventContent");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_UWLLiveActivityEventContent\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_UWLLiveActivityEventContent");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_UWLLiveActivityEventContent\n"); }
    p = dlsym(h, "OBJC_CLASS_$_UWLMessageHeaders");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_UWLMessageHeaders\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_UWLMessageHeaders");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_UWLMessageHeaders\n"); }
    p = dlsym(h, "OBJC_CLASS_$_UWLMessageWireEnvelope");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_UWLMessageWireEnvelope\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_UWLMessageWireEnvelope");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_UWLMessageWireEnvelope\n"); }
    p = dlsym(h, "OBJC_CLASS_$_UWLOptInEvent");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_UWLOptInEvent\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_UWLOptInEvent");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_UWLOptInEvent\n"); }
    p = dlsym(h, "OBJC_CLASS_$_UWLOptOutEvent");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_UWLOptOutEvent\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_UWLOptOutEvent");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_UWLOptOutEvent\n"); }
    p = dlsym(h, "OBJC_CLASS_$_UWLPlayEvent");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_UWLPlayEvent\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_UWLPlayEvent");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_UWLPlayEvent\n"); }
    p = dlsym(h, "OBJC_CLASS_$_VideoController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_VideoController\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_VideoController");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_VideoController\n"); }
    p = dlsym(h, "OBJC_CLASS_$_VideoData");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_VideoData\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_VideoData");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_VideoData\n"); }
    p = dlsym(h, "OBJC_CLASS_$_WLDLivePlaybackReporter");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_WLDLivePlaybackReporter\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_WLDLivePlaybackReporter");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_WLDLivePlaybackReporter\n"); }
    p = dlsym(h, "OBJC_CLASS_$_WLDPlaybackManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_WLDPlaybackManager\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_WLDPlaybackManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_WLDPlaybackManager\n"); }
    p = dlsym(h, "OBJC_CLASS_$_WLDPlaybackObserver");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_WLDPlaybackObserver\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_WLDPlaybackObserver");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_WLDPlaybackObserver\n"); }
    p = dlsym(h, "OBJC_CLASS_$_WLDPlaybackReporter");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_WLDPlaybackReporter\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_WLDPlaybackReporter");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_WLDPlaybackReporter\n"); }
    p = dlsym(h, "OBJC_CLASS_$_WLDRateLimiter");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_WLDRateLimiter\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_WLDRateLimiter");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_WLDRateLimiter\n"); }
    p = dlsym(h, "OBJC_CLASS_$_WLKBasicContentMetadata");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_WLKBasicContentMetadata\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_WLKBasicContentMetadata");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_WLKBasicContentMetadata\n"); }
    p = dlsym(h, "OBJC_CLASS_$_WLKBasicEpisodeMetadata");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_WLKBasicEpisodeMetadata\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_WLKBasicEpisodeMetadata");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_WLKBasicEpisodeMetadata\n"); }
    p = dlsym(h, "OBJC_CLASS_$_WLKBasicMovieMetadata");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_WLKBasicMovieMetadata\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_WLKBasicMovieMetadata");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_WLKBasicMovieMetadata\n"); }
    p = dlsym(h, "OBJC_CLASS_$_WLKBasicSeasonMetadata");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_WLKBasicSeasonMetadata\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_WLKBasicSeasonMetadata");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_WLKBasicSeasonMetadata\n"); }
    p = dlsym(h, "OBJC_CLASS_$_WLKBasicShowMetadata");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_WLKBasicShowMetadata\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_WLKBasicShowMetadata");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_WLKBasicShowMetadata\n"); }
    p = dlsym(h, "OBJC_CLASS_$_WLKBasicSportingEventMetadata");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_WLKBasicSportingEventMetadata\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_WLKBasicSportingEventMetadata");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_WLKBasicSportingEventMetadata\n"); }
    p = dlsym(h, "OBJC_CLASS_$_WLKCache");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_WLKCache\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_WLKCache");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_WLKCache\n"); }
    p = dlsym(h, "OBJC_CLASS_$_WLKChannel");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_WLKChannel\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_WLKChannel");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_WLKChannel\n"); }
    p = dlsym(h, "OBJC_CLASS_$_WLKChannelDetails");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_WLKChannelDetails\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_WLKChannelDetails");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_WLKChannelDetails\n"); }
    p = dlsym(h, "OBJC_CLASS_$_WLKContentRating");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_WLKContentRating\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_WLKContentRating");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_WLKContentRating\n"); }
    p = dlsym(h, "OBJC_CLASS_$_WLKDictionaryResponseProcessor");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_WLKDictionaryResponseProcessor\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_WLKDictionaryResponseProcessor");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_WLKDictionaryResponseProcessor\n"); }
    p = dlsym(h, "OBJC_CLASS_$_WLKEvent");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_WLKEvent\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_WLKEvent");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_WLKEvent\n"); }
    p = dlsym(h, "OBJC_CLASS_$_WLKGenre");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_WLKGenre\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_WLKGenre");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_WLKGenre\n"); }
    p = dlsym(h, "OBJC_CLASS_$_WLKLocale");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_WLKLocale\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_WLKLocale");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_WLKLocale\n"); }
    p = dlsym(h, "OBJC_CLASS_$_WLKMovieContentRating");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_WLKMovieContentRating\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_WLKMovieContentRating");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_WLKMovieContentRating\n"); }
    p = dlsym(h, "OBJC_CLASS_$_WLKNetworkRequestOperation");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_WLKNetworkRequestOperation\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_WLKNetworkRequestOperation");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_WLKNetworkRequestOperation\n"); }
    p = dlsym(h, "OBJC_CLASS_$_WLKNetworkRequestReauthCoordinator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_WLKNetworkRequestReauthCoordinator\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_WLKNetworkRequestReauthCoordinator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_WLKNetworkRequestReauthCoordinator\n"); }
    p = dlsym(h, "OBJC_CLASS_$_WLKOnboarding");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_WLKOnboarding\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_WLKOnboarding");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_WLKOnboarding\n"); }
    p = dlsym(h, "OBJC_CLASS_$_WLKPlayActivityDecorateEBSOperation");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_WLKPlayActivityDecorateEBSOperation\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_WLKPlayActivityDecorateEBSOperation");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_WLKPlayActivityDecorateEBSOperation\n"); }
    p = dlsym(h, "OBJC_CLASS_$_WLKPlayActivityDecorateLiveOperation");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_WLKPlayActivityDecorateLiveOperation\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_WLKPlayActivityDecorateLiveOperation");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_WLKPlayActivityDecorateLiveOperation\n"); }
    p = dlsym(h, "OBJC_CLASS_$_WLKPlayActivityDecorateOperation");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_WLKPlayActivityDecorateOperation\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_WLKPlayActivityDecorateOperation");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_WLKPlayActivityDecorateOperation\n"); }
    p = dlsym(h, "OBJC_CLASS_$_WLKPlayActivityMetadata");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_WLKPlayActivityMetadata\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_WLKPlayActivityMetadata");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_WLKPlayActivityMetadata\n"); }
    p = dlsym(h, "OBJC_CLASS_$_WLKPlayActivityNetworkRequestOperation");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_WLKPlayActivityNetworkRequestOperation\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_WLKPlayActivityNetworkRequestOperation");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_WLKPlayActivityNetworkRequestOperation\n"); }
    p = dlsym(h, "OBJC_CLASS_$_WLKPlayEvent");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_WLKPlayEvent\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_WLKPlayEvent");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_WLKPlayEvent\n"); }
    p = dlsym(h, "OBJC_CLASS_$_WLKPlayable");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_WLKPlayable\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_WLKPlayable");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_WLKPlayable\n"); }
    p = dlsym(h, "OBJC_CLASS_$_WLKPlaybackSummary");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_WLKPlaybackSummary\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_WLKPlaybackSummary");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_WLKPlaybackSummary\n"); }
    p = dlsym(h, "OBJC_CLASS_$_WLKRequest");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_WLKRequest\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_WLKRequest");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_WLKRequest\n"); }
    p = dlsym(h, "OBJC_CLASS_$_WLKSchedule");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_WLKSchedule\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_WLKSchedule");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_WLKSchedule\n"); }
    p = dlsym(h, "OBJC_CLASS_$_WLKServerConfiguration");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_WLKServerConfiguration\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_WLKServerConfiguration");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_WLKServerConfiguration\n"); }
    p = dlsym(h, "OBJC_CLASS_$_WLKServerConfigurationRequestOperation");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_WLKServerConfigurationRequestOperation\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_WLKServerConfigurationRequestOperation");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_WLKServerConfigurationRequestOperation\n"); }
    p = dlsym(h, "OBJC_CLASS_$_WLKServerConfigurationResponse");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_WLKServerConfigurationResponse\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_WLKServerConfigurationResponse");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_WLKServerConfigurationResponse\n"); }
    p = dlsym(h, "OBJC_CLASS_$_WLKServerRoute");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_WLKServerRoute\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_WLKServerRoute");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_WLKServerRoute\n"); }
    p = dlsym(h, "OBJC_CLASS_$_WLKSettingsCloudUtilities");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_WLKSettingsCloudUtilities\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_WLKSettingsCloudUtilities");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_WLKSettingsCloudUtilities\n"); }
    p = dlsym(h, "OBJC_CLASS_$_WLKSettingsModificationRequestOperation");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_WLKSettingsModificationRequestOperation\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_WLKSettingsModificationRequestOperation");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_WLKSettingsModificationRequestOperation\n"); }
    p = dlsym(h, "OBJC_CLASS_$_WLKSettingsRequestOperation");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_WLKSettingsRequestOperation\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_WLKSettingsRequestOperation");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_WLKSettingsRequestOperation\n"); }
    p = dlsym(h, "OBJC_CLASS_$_WLKSettingsStore");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_WLKSettingsStore\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_WLKSettingsStore");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_WLKSettingsStore\n"); }
    p = dlsym(h, "OBJC_CLASS_$_WLKShowContentRating");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_WLKShowContentRating\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_WLKShowContentRating");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_WLKShowContentRating\n"); }
    p = dlsym(h, "OBJC_CLASS_$_WLKSortedKeyDictionary");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_WLKSortedKeyDictionary\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_WLKSortedKeyDictionary");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_WLKSortedKeyDictionary\n"); }
    p = dlsym(h, "OBJC_CLASS_$_WLKUserEnvironment");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_WLKUserEnvironment\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_WLKUserEnvironment");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_WLKUserEnvironment\n"); }
    p = dlsym(h, "OBJC_CLASS_$_YTAccountManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_YTAccountManager\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_YTAccountManager");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_YTAccountManager\n"); }
    p = dlsym(h, "OBJC_CLASS_$__BRRemoteEventSendingUILongPressGestureRecognizer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$__BRRemoteEventSendingUILongPressGestureRecognizer\n"); }
    p = dlsym(h, "OBJC_METACLASS_$__BRRemoteEventSendingUILongPressGestureRecognizer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$__BRRemoteEventSendingUILongPressGestureRecognizer\n"); }
    p = dlsym(h, "OBJC_CLASS_$__BRRemoteEventSendingUIRepeatingPressGestureRecognizer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$__BRRemoteEventSendingUIRepeatingPressGestureRecognizer\n"); }
    p = dlsym(h, "OBJC_METACLASS_$__BRRemoteEventSendingUIRepeatingPressGestureRecognizer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$__BRRemoteEventSendingUIRepeatingPressGestureRecognizer\n"); }
    p = dlsym(h, "OBJC_CLASS_$__BRRemoteEventSendingUITapGestureRecognizer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$__BRRemoteEventSendingUITapGestureRecognizer\n"); }
    p = dlsym(h, "OBJC_METACLASS_$__BRRemoteEventSendingUITapGestureRecognizer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$__BRRemoteEventSendingUITapGestureRecognizer\n"); }
    p = dlsym(h, "OBJC_CLASS_$__BRRemoteEventUIPanGestureRecognizer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$__BRRemoteEventUIPanGestureRecognizer\n"); }
    p = dlsym(h, "OBJC_METACLASS_$__BRRemoteEventUIPanGestureRecognizer");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$__BRRemoteEventUIPanGestureRecognizer\n"); }
    p = dlsym(h, "OBJC_CLASS_$__WLKBagInvalidator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$__WLKBagInvalidator\n"); }
    p = dlsym(h, "OBJC_METACLASS_$__WLKBagInvalidator");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$__WLKBagInvalidator\n"); }
    p = dlsym(h, "OBJC_CLASS_$_daNetflixStringsProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_daNetflixStringsProvider\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_daNetflixStringsProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_daNetflixStringsProvider\n"); }
    p = dlsym(h, "OBJC_CLASS_$_deNetflixStringsProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_deNetflixStringsProvider\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_deNetflixStringsProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_deNetflixStringsProvider\n"); }
    p = dlsym(h, "OBJC_CLASS_$_enNetflixStringsProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_enNetflixStringsProvider\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_enNetflixStringsProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_enNetflixStringsProvider\n"); }
    p = dlsym(h, "OBJC_CLASS_$_en_AUNetflixStringsProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_en_AUNetflixStringsProvider\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_en_AUNetflixStringsProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_en_AUNetflixStringsProvider\n"); }
    p = dlsym(h, "OBJC_CLASS_$_en_GBNetflixStringsProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_en_GBNetflixStringsProvider\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_en_GBNetflixStringsProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_en_GBNetflixStringsProvider\n"); }
    p = dlsym(h, "OBJC_CLASS_$_esNetflixStringsProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_esNetflixStringsProvider\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_esNetflixStringsProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_esNetflixStringsProvider\n"); }
    p = dlsym(h, "OBJC_CLASS_$_fiNetflixStringsProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_fiNetflixStringsProvider\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_fiNetflixStringsProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_fiNetflixStringsProvider\n"); }
    p = dlsym(h, "OBJC_CLASS_$_frNetflixStringsProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_frNetflixStringsProvider\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_frNetflixStringsProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_frNetflixStringsProvider\n"); }
    p = dlsym(h, "OBJC_CLASS_$_fr_CANetflixStringsProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_fr_CANetflixStringsProvider\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_fr_CANetflixStringsProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_fr_CANetflixStringsProvider\n"); }
    p = dlsym(h, "OBJC_CLASS_$_nbNetflixStringsProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_nbNetflixStringsProvider\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_nbNetflixStringsProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_nbNetflixStringsProvider\n"); }
    p = dlsym(h, "OBJC_CLASS_$_nlNetflixStringsProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_nlNetflixStringsProvider\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_nlNetflixStringsProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_nlNetflixStringsProvider\n"); }
    p = dlsym(h, "OBJC_CLASS_$_ptNetflixStringsProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_ptNetflixStringsProvider\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_ptNetflixStringsProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_ptNetflixStringsProvider\n"); }
    p = dlsym(h, "OBJC_CLASS_$_svNetflixStringsProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_CLASS_$_svNetflixStringsProvider\n"); }
    p = dlsym(h, "OBJC_METACLASS_$_svNetflixStringsProvider");
    if (p) { pass++; } else { fail++; printf("MISS: OBJC_METACLASS_$_svNetflixStringsProvider\n"); }

    printf("\n=== RESULTS ===\n");
    printf("Total: %d  Pass: %d  Fail: %d\n", pass+fail, pass, fail);
    return fail > 0 ? 1 : 0;
}
