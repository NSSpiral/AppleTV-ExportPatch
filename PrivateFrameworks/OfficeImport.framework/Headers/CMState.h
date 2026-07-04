/* Runtime dump - CMState
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CMState : NSObject
{
    NSMutableDictionary * components;
    NSMutableDictionary * htmlResource;
    NSString * mResourceUrlPrefix;
    OADColorMap * mColorMap;
    OADColorScheme * mColorScheme;
    id mResources;
    int mSrcFormat;
    char mIsThumbnail;
    char mIsOnPhone;
    int _textLevel;
}

- (void)dealloc;
- (CMState *)init;
- (OADColorScheme *)colorScheme;
- (void)setColorScheme:(OADColorScheme *)arg0;
- (char)isOnPhone;
- (int)textLevel;
- (void)pushTextLevel;
- (void)popTextLevel;
- (void)setIsOnPhone:(char)arg0;
- (void)setSrcFormat:(int)arg0;
- (char)isThumbnail;
- (void)setIsThumbnail:(char)arg0;
- (OADColorMap *)colorMap;
- (void)copyFromCMStateWithoutComponents:(NSArray *)arg0;
- (NSObject *)getHtmlResource;
- (void)setHtmlResource:(NSMutableDictionary *)arg0;
- (NSString *)resourceUrlPrefix;
- (int)sourceFormat;
- (NSString *)componentByName:(NSString *)arg0;
- (void)setComponentWithName:(NSString *)arg0 value:(NSObject *)arg1;
- (void)setResourceUrlPrefix:(NSString *)arg0;
- (void)setColorMap:(OADColorMap *)arg0;
- (char)isOffice12;
- (void)setResources:(NSArray *)arg0;
- (NSArray *)resources;

@end
