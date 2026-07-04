/* Runtime dump - MFWebKitMainThread
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFWebKitMainThread : NSObject
{
    struct __CFDictionary * _visibleDict;
    MFLock * _visibleDictLock;
}

+ (MFWebKitMainThread *)sharedInstance;

- (void)_mainThreadPopulateDictForMimeType:(NSObject *)arg0;
- (int)dictValueForMimeType:(NSObject *)arg0;
- (void)dealloc;
- (MFWebKitMainThread *)init;

@end
