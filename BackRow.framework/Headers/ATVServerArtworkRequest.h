/* Runtime dump - ATVServerArtworkRequest
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVServerArtworkRequest : NSObject
{
    struct ATVServerRequest * _serverRequest;
    NSString * _artworkID;
    ATVImage * _artworkImage;
    ATVImage * _artworkScaledImage;
    <BRImageProxy> * _artworkImageProxy;
    NSNumber * _responseCode;
    struct CGSize _scaledSize;
}

@property (nonatomic) struct ATVServerRequest * serverRequest;
@property (retain, nonatomic) NSString * artworkID;
@property (nonatomic) struct CGSize scaledSize;
@property (retain, nonatomic) ATVImage * artworkImage;
@property (retain, nonatomic) ATVImage * artworkScaledImage;
@property (retain, nonatomic) <BRImageProxy> * artworkImageProxy;
@property (retain, nonatomic) NSNumber * responseCode;

- (ATVServerArtworkRequest *)initWithServerRequest:(struct ATVServerRequest *)arg0;
- (void)setArtworkID:(NSString *)arg0;
- (void)setArtworkImage:(ATVImage *)arg0;
- (void)setArtworkImageProxy:(<BRImageProxy> *)arg0;
- (<BRImageProxy> *)artworkImageProxy;
- (ATVImage *)artworkScaledImage;
- (ATVImage *)artworkImage;
- (NSString *)artworkID;
- (void)setArtworkScaledImage:(ATVImage *)arg0;
- (NSNumber *)responseCode;
- (void)dealloc;
- (struct CGSize)scaledSize;
- (void)setScaledSize:(struct CGSize)arg0;
- (void).cxx_construct;
- (void).cxx_destruct;
- (struct ATVServerRequest *)serverRequest;
- (void)setServerRequest:(struct ATVServerRequest *)arg0;
- (void)setResponseCode:(NSNumber *)arg0;

@end
