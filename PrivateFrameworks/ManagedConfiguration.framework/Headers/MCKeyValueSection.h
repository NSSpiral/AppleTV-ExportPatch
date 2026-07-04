/* Runtime dump - MCKeyValueSection
 * Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCKeyValueSection : NSObject
{
    NSString * _sectionTitle;
    NSString * _sectionFooter;
    NSArray * _sectionKeyValues;
}

@property (retain, nonatomic) NSString * sectionTitle;
@property (retain, nonatomic) NSString * sectionFooter;
@property (retain, nonatomic) NSArray * sectionKeyValues;

+ (NSArray *)sectionWithLocalizedArray:(NSArray *)arg0 title:(NSString *)arg1 footer:(RemoteUISectionFooter *)arg2;
+ (NSArray *)sectionWithKeyValues:(NSArray *)arg0;

- (void).cxx_destruct;
- (MCKeyValueSection *)initWithSectionTitle:(NSString *)arg0 footer:(RemoteUISectionFooter *)arg1 keyValues:(NSArray *)arg2;
- (NSString *)sectionTitle;
- (void)setSectionTitle:(NSString *)arg0;
- (NSString *)sectionFooter;
- (void)setSectionFooter:(NSString *)arg0;
- (NSArray *)sectionKeyValues;
- (void)setSectionKeyValues:(NSArray *)arg0;

@end
