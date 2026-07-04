/* Runtime dump - OCPPackageProperties
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OCPPackageProperties : NSObject
{
    NSString * mCreator;
    NSString * mDescription;
    NSString * mKeywords;
    NSString * mTitle;
}

- (void)dealloc;
- (NSString *)description;
- (NSString *)title;
- (void)readFromXml:(struct _xmlDoc *)arg0;
- (OCPPackageProperties *)initWithXml:(struct _xmlDoc *)arg0;
- (NSString *)creator;
- (NSString *)keywords;

@end
