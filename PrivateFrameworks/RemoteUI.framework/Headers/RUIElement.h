/* Runtime dump - RUIElement
 * Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RUIElement : NSObject
{
    NSDictionary * _attributes;
    char _enabled;
}

@property (retain, nonatomic) NSDictionary * attributes;
@property (readonly, nonatomic) NSString * name;
@property (nonatomic) char enabled;

- (NSURL *)sourceURL;
- (void)dealloc;
- (void)setImage:(UIImage *)arg0;
- (RUIElement *)init;
- (NSString *)name;
- (void)setEnabled:(char)arg0;
- (char)enabled;
- (NSDictionary *)attributes;
- (void).cxx_destruct;
- (void)setAttributes:(NSDictionary *)arg0;
- (void)populatePostbackDictionary:(NSDictionary *)arg0;
- (void)setImageSize:(struct CGSize)arg0;
- (char)loadImage;
- (void)setImageAlignment:(int)arg0;
- (NSString *)subElementsWithName:(NSString *)arg0;
- (NSString *)URLAttributeForImageName:(NSString *)arg0 getScale:(float *)arg1;
- (void)imageLoaded:(char)arg0;
- (int)_horizontalAlignmentForString:(NSString *)arg0;

@end
