/* Runtime dump - PSMagnifyMode
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSMagnifyMode : NSObject <NSCopying>
{
    char _zoomed;
    NSString * _localizedName;
    NSString * _name;
    NSArray * _previewHTMLStrings;
    NSArray * _previewStyleSheets;
    struct CGSize _size;
}

@property (nonatomic) struct CGSize size;
@property (retain, nonatomic) NSString * localizedName;
@property (nonatomic) char zoomed;
@property (retain, nonatomic) NSString * name;
@property (retain, nonatomic) NSArray * previewHTMLStrings;
@property (retain, nonatomic) NSArray * previewStyleSheets;

+ (NSObject *)magnifyModeWithSize:(struct CGSize)arg0 name:(NSString *)arg1 localizedName:(NSString *)arg2 isZoomed:(char)arg3;

- (void)dealloc;
- (struct CGSize)size;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (PSMagnifyMode *)copyWithZone:(struct _NSZone *)arg0;
- (void)setSize:(struct CGSize)arg0;
- (NSString *)localizedName;
- (char)isZoomed;
- (void)setZoomed:(char)arg0;
- (void)setLocalizedName:(NSString *)arg0;
- (NSArray *)previewHTMLStrings;
- (void)setPreviewHTMLStrings:(NSArray *)arg0;
- (NSArray *)previewStyleSheets;
- (void)setPreviewStyleSheets:(NSArray *)arg0;

@end
