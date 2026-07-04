/* Runtime dump - IKAssetElement
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKAssetElement : IKViewElement
{
    char _infiniteDuration;
}

@property (readonly, retain, nonatomic) NSURL * url;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) int keyDelivery;
@property (readonly, nonatomic) char infiniteDuration;
@property (readonly, retain, nonatomic) NSString * actionParams;
@property (readonly, retain, nonatomic) NSString * adamID;
@property (readonly, retain, nonatomic) NSString * bookmarkID;
@property (readonly, retain, nonatomic) NSString * contentID;
@property (readonly, retain, nonatomic) NSString * serviceID;

+ (char)shouldParseChildDOMElements;

- (NSURL *)url;
- (int)type;
- (int)keyDelivery;
- (char)infiniteDuration;
- (NSString *)actionParams;
- (NSString *)bookmarkID;
- (NSString *)serviceID;
- (char)isInfiniteDuration;
- (NSString *)contentID;
- (NSString *)adamID;

@end
