/* Runtime dump - MRHitBlob
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MRHitBlob : NSObject
{
    unsigned char _currentLayoutIndex;
    MRLayer * _outerLayer;
    MRLayerEffect * _effectLayer;
    NSString * _innerPath;
    NSString * _elementID;
    id _clientObject;
    <MRSlidePositionSupport> * _proxyForSlide;
}

@property (retain) id clientObject;
@property (retain) MRLayer * outerLayer;
@property (retain) MRLayerEffect * effectLayer;
@property (copy) NSString * innerPath;
@property (readonly) NSString * mediaType;
@property (readonly) float aspectRatio;
@property (readonly) struct CGSize innerResolution;
@property <MRSlidePositionSupport> * proxyForSlide;
@property (nonatomic) unsigned char currentLayoutIndex;
@property (copy) NSString * elementID;

- (void)setElementID:(NSString *)arg0;
- (NSString *)elementID;
- (MRLayerEffect *)effectLayer;
- (unsigned char)currentLayoutIndex;
- (void)setCurrentLayoutIndex:(unsigned char)arg0;
- (void)setEffectLayer:(MRLayerEffect *)arg0;
- (void)setOuterLayer:(MRLayer *)arg0;
- (void)setClientObject:(NSObject *)arg0;
- (void)setInnerPath:(NSString *)arg0;
- (MRLayer *)outerLayer;
- (<MRSlidePositionSupport> *)proxyForSlide;
- (NSObject *)clientObject;
- (NSString *)innerPath;
- (struct CGSize)innerResolution;
- (char)isEqualToHitBlob:(id)arg0;
- (void)setProxyForSlide:(<MRSlidePositionSupport> *)arg0;
- (NSString *)mediaType;
- (float)aspectRatio;

@end
