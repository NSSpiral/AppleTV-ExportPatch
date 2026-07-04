/* Runtime dump - ATVFeedImageAssetElementType
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedElement.h>

@class ATVFeedElement, BRMerchant;
@interface ATVFeedImageAssetElementType : ATVFeedElement
{
    NSString * _name;
    float _width;
    float _height;
    NSString * _src;
}

@property (retain, nonatomic) NSString * name;
@property (nonatomic) float width;
@property (nonatomic) float height;
@property (retain, nonatomic) NSString * src;

- (ATVFeedImageAssetElementType *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (float)width;
- (float)height;
- (void)setWidth:(float)arg0;
- (void).cxx_destruct;
- (void)setHeight:(float)arg0;
- (NSString *)src;
- (void)setSrc:(NSString *)arg0;

@end
