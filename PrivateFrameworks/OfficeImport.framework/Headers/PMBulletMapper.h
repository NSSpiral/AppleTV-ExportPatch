/* Runtime dump - PMBulletMapper
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PMBulletMapper : CMMapper
{
    OADParagraphProperties * mProperties;
    CMStyle * mStyle;
    int mFontSize;
}

+ (NSObject *)stringForIndex:(unsigned int)arg0 withFormat:(int)arg1;

- (void)dealloc;
- (void)mapAt:(NSObject *)arg0 withState:(NSObject *)arg1;
- (NSObject *)makeBulletWithListState:(NSObject *)arg0;
- (int)bulletSize;
- (NSString *)bulletFontName;
- (void)mapBulletColorWithState:(NSObject *)arg0;
- (PMBulletMapper *)initWithOadProperties:(NSDictionary *)arg0 fontSize:(int)arg1 parent:(NSObject *)arg2;

@end
