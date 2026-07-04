/* Runtime dump - ODDStyleDefinition
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ODDStyleDefinition : NSObject
{
    NSMutableDictionary * mStyleLabels;
}

- (void)dealloc;
- (ODDStyleDefinition *)init;
- (NSString *)labelForName:(NSString *)arg0;
- (void)setLabel:(NSString *)arg0 forName:(NSString *)arg1;

@end
