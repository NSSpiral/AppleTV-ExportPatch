/* Runtime dump - WDCitationAuthor
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDCitationAuthor : NSObject
{
    NSString * mFirst;
    NSString * mLast;
}

@property (retain, nonatomic) NSString * first;
@property (retain, nonatomic) NSString * last;

- (void)dealloc;
- (void)setLast:(NSString *)arg0;
- (NSString *)last;
- (NSString *)first;
- (void)setFirst:(NSString *)arg0;
- (WDCitationAuthor *)initWithFirst:(NSString *)arg0 last:(NSString *)arg1;

@end
