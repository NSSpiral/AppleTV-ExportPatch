/* Runtime dump - SBFObliterationController
 * Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFObliterationController : NSObject

+ (SBFObliterationController *)sharedInstance;

- (void)_doObliterateWithType:(struct __CFString *)arg0 showingProgress:(char)arg1 options:(NSDictionary *)arg2;
- (void)wipeAndBrickShowingProgress:(char)arg0;
- (void)obliterateDataPartitionShowingProgress:(char)arg0 skipDataObliteration:(char)arg1;

@end
