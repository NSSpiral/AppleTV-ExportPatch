/* Runtime dump - OCXSStream
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OCXSStream : NSObject
{
    NSMutableArray * mLevelStack;
}

- (void)dealloc;
- (OCXSStream *)init;
- (char)hasLevels;
- (int)currentContextDepth;
- (char)popLevel;
- (int)currentContextChildDepth;
- (void)pushLevel:(int)arg0 name:(char *)arg1;

@end
