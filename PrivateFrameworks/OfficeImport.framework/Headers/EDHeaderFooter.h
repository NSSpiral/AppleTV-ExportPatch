/* Runtime dump - EDHeaderFooter
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDHeaderFooter : NSObject
{
    NSString * mHeaderString;
    NSString * mFooterString;
}

+ (EDHeaderFooter *)headerFooter;

- (void)dealloc;
- (NSString *)headerString;
- (NSString *)footerString;
- (void)setHeaderString:(NSString *)arg0;
- (void)setFooterString:(NSString *)arg0;

@end
