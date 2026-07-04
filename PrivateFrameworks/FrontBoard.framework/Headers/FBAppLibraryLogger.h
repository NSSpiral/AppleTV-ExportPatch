/* Runtime dump - FBAppLibraryLogger
 * Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBAppLibraryLogger : FBFileLogger

- (NSString *)name;
- (char)isEnabled;
- (void)_setEnabled:(char)arg0;
- (int)maxLogSize;
- (char)shouldEnableOnInternalBuilds;

@end
