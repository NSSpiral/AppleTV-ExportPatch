/* Runtime dump - CUINamedData
 * Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUINamedData : NSObject
{
    CUIRenditionKey * _key;
    unsigned int _storageRef;
    NSString * _name;
}

@property (copy, nonatomic) NSString * name;
@property (readonly, nonatomic) NSString * utiType;
@property (readonly, nonatomic) NSData * data;

- (void)dealloc;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (NSData *)data;
- (NSString *)utiType;
- (CUIThemeSchemaRendition *)_rendition;
- (NSObject *)_themeStore;
- (NSString *)_renditionForSpecificKey:(NSString *)arg0;
- (NSString *)_renditionName;
- (CUINamedData *)initWithName:(NSString *)arg0 usingRenditionKey:(NSString *)arg1 fromTheme:(unsigned int)arg2;

@end
