/* Runtime dump - UIStoryboard
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStoryboard : NSObject
{
    NSBundle * bundle;
    NSString * storyboardFileName;
    NSDictionary * identifierToNibNameMap;
    NSString * designatedEntryPointIdentifier;
    NSMutableDictionary * identifierToUINibMap;
}

@property (readonly, nonatomic) NSBundle * bundle;
@property (readonly) NSString * name;
@property (readonly, nonatomic) NSString * storyboardFileName;
@property (readonly, nonatomic) NSDictionary * identifierToNibNameMap;
@property (readonly, nonatomic) NSString * designatedEntryPointIdentifier;
@property (readonly, nonatomic) NSMutableDictionary * identifierToUINibMap;

+ (UIStoryboard *)storyboardWithName:(NSString *)arg0 bundle:(NSBundle *)arg1;

- (void)dealloc;
- (NSString *)name;
- (NSObject *)instantiateInitialViewController;
- (NSString *)instantiateViewControllerWithIdentifier:(NSString *)arg0;
- (char)containsNibNamed:(id)arg0;
- (id)nibForStoryboardNibNamed:(id)arg0;
- (NSBundle *)bundle;
- (NSString *)identifierForStringsFile;
- (UIStoryboard *)initWithBundle:(NSBundle *)arg0 storyboardFileName:(NSString *)arg1 identifierToNibNameMap:(NSDictionary *)arg2 designatedEntryPointIdentifier:(NSString *)arg3;
- (NSString *)storyboardFileName;
- (NSDictionary *)identifierToNibNameMap;
- (NSString *)nibForViewControllerWithIdentifier:(NSString *)arg0;
- (NSString *)designatedEntryPointIdentifier;
- (NSMutableDictionary *)identifierToUINibMap;

@end
