/* Runtime dump - VKNavUserLocationAnnotationMarker
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKNavUserLocationAnnotationMarker : VKAnnotationMarker
{
    char _shouldBillboard;
    VKAnimation * _billboardAnimation;
    float _billboardFactor;
    float _scale;
    char _shouldShowCourse;
    char _puckFlipped;
    double _presentationCourse;
    double _sizePoints;
    double _puckOffset;
    char _stale;
    VKAnimation * _puckStyleAnimation;
    int _puckStyle;
    float _greyPuckAlphaScale;
    struct ? _puckState;
    int _style;
    struct Matrix<float, 4, 1> _arrowColor;
    struct Matrix<float, 4, 1> _arrowColorStale;
    float _circleBrightness;
    float _arrowBrightness;
    struct shared_ptr<ggl::Texture2D> _textureArrow;
    struct shared_ptr<ggl::Texture2D> _textureCircle;
    struct shared_ptr<ggl::RenderState> _gglPuckRenderState;
    struct shared_ptr<ggl::TextureWithBrightness::Shader::Setup> _circleShaderSetup;
    struct shared_ptr<ggl::TextureAlphaMask::Shader::Setup> _arrowShaderSetup;
    struct shared_ptr<ggl::RenderItem> _arrowRenderItem;
    struct shared_ptr<ggl::RenderItem> _circleRenderItem;
    char _needsTextureUpdate;
}

@property (nonatomic) char shouldBillboard;
@property (nonatomic) char shouldShowCourse;
@property (nonatomic) float scale;
@property (nonatomic) char stale;
@property (nonatomic) int style;
@property (nonatomic) double presentationCourse;
@property (nonatomic) struct ? innerColor;

- (void)dealloc;
- (float)scale;
- (int)style;
- (void)setScale:(float)arg0;
- (void)setStyle:(int)arg0;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (void).cxx_construct;
- (void).cxx_destruct;
- (void)setModel:(VKAnnotationModel *)arg0;
- (void)layoutWithContext:(NSObject *)arg0;
- (void)appendCommandsToBuffer:(struct CommandBuffer *)arg0 inContext:(struct ClearItem *)arg1;
- (void)_updatePuckStyle;
- (void)_updateTexturesIfNeeded;
- (double)presentationCourse;
- (struct ?)innerColor;
- (void)setInnerColor:(struct ?)arg0;
- (void)setPresentationCourse:(double)arg0;
- (void)setShouldBillboard:(char)arg0;
- (void)setShouldShowCourse:(char)arg0;
- (void)setStale:(char)arg0;
- (VKNavUserLocationAnnotationMarker *)initWithAnnotation:(NSObject *)arg0 reuseIdentifier:(NSString *)arg1 style:(int)arg2;
- (void)updateWithStyleQuery:(struct shared_ptr<md::StyleQuery> *)arg0;
- (char)isStale;
- (char)shouldBillboard;
- (char)shouldShowCourse;

@end
