/* Runtime dump - IKImageElement
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKImageElement : IKViewElement
{
    float _srcWidth;
    float _srcHeight;
    NSDictionary * _srcset;
    unsigned int _imageType;
    NSURL * _defaultURL;
}

@property (readonly, nonatomic) NSURL * url;
@property (readonly, retain, nonatomic) NSDictionary * srcset;
@property (readonly, retain, nonatomic) NSURL * placeholderURL;
@property (readonly, nonatomic) unsigned int imageType;
@property (readonly, nonatomic) float width;
@property (readonly, nonatomic) float height;
@property (readonly, nonatomic) unsigned int position;
@property (readonly, nonatomic) UIColor * borderColor;
@property (readonly, nonatomic) int fill;
@property (readonly, nonatomic) int reflect;
@property (retain, nonatomic) NSURL * defaultURL;

+ (char)shouldParseChildDOMElements;

- (NSURL *)url;
- (int)fill;
- (unsigned int)position;
- (float)width;
- (float)height;
- (UIColor *)borderColor;
- (void).cxx_destruct;
- (IKImageElement *)initWithDOMElement:(NSObject *)arg0 parent:(NSObject *)arg1 elementFactory:(IKViewElementFactory *)arg2;
- (unsigned int)_imageTypeForTagName:(NSString *)arg0;
- (NSURL *)defaultURL;
- (NSURL *)placeholderURL;
- (int)reflect;
- (void)setDefaultURL:(NSURL *)arg0;
- (unsigned int)imageType;
- (NSDictionary *)srcset;

@end
