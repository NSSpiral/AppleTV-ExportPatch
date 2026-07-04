/* Runtime dump - NSTextContainer
 * Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSTextContainer : NSObject <NSCoding, NSTextLayoutOrientationProvider>
{
    NSLayoutManager * _layoutManager;
    id _textView;
    struct CGSize _size;
    float _lineFragmentPadding;
    unsigned int _maximumLines;
    struct __tcFlags _tcFlags;
    NSArray * _exclusionPaths;
    struct CGPath * _cachedBoundingPath;
    struct __CFArray * _cachedClippingAttributes;
    struct __CFArray * _cachedBounds;
    float _cacheBoundsMinY;
    float _cacheBoundsMaxY;
    float _minimumWidth;
    int _layoutOrientation;
    NSDictionary * _attributesForExtraLineFragment;
}

@property (readonly) char isSimpleRectangularTextContainer;
@property (nonatomic) NSLayoutManager * layoutManager;
@property (nonatomic) struct CGSize size;
@property (copy, nonatomic) NSArray * exclusionPaths;
@property (nonatomic) int lineBreakMode;
@property (nonatomic) float lineFragmentPadding;
@property (nonatomic) unsigned int maximumNumberOfLines;
@property (nonatomic) char widthTracksTextView;
@property (nonatomic) char heightTracksTextView;
@property (nonatomic) int layoutOrientation;

+ (void)initialize;

- (void)dealloc;
- (struct CGSize)size;
- (NSTextContainer *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSTextContainer *)init;
- (NSString *)description;
- (void)setLineBreakMode:(int)arg0;
- (void)setMaximumNumberOfLines:(unsigned int)arg0;
- (void)_commonInit;
- (void)setSize:(struct CGSize)arg0;
- (NSTextContainer *)initWithSize:(struct CGSize)arg0;
- (NSLayoutManager *)layoutManager;
- (void)setTextView:(NSObject *)arg0;
- (void)setLineFragmentPadding:(float)arg0;
- (void)coordinateAccess:(id)arg0;
- (void)setAttributesForExtraLineFragment:(NSDictionary *)arg0;
- (struct CGPoint)textContainerOrigin;
- (int)layoutOrientation;
- (void)setLayoutOrientation:(int)arg0;
- (void)setLayoutManager:(NSLayoutManager *)arg0;
- (int)lineBreakMode;
- (UIResponder<UITextInput> *)textView;
- (char)widthTracksTextView;
- (char)heightTracksTextView;
- (void)setWidthTracksTextView:(char)arg0;
- (void)setHeightTracksTextView:(char)arg0;
- (void)setContainerSize:(struct CGSize)arg0;
- (NSArray *)exclusionPaths;
- (void)setExclusionPaths:(NSArray *)arg0;
- (float)lineFragmentPadding;
- (unsigned int)maximumNumberOfLines;
- (NSDictionary *)attributesForExtraLineFragment;
- (struct CGSize)containerSize;
- (struct CGRect)lineFragmentRectForProposedRect:(NSObject *)arg0 remainingRect:(SEL)arg1;
- (char)isSimpleRectangularTextContainer;
- (struct CGRect)lineFragmentRectForProposedRect:(NSObject *)arg0 atIndex:(SEL)arg1 writingDirection:(struct CGRect)arg2 remainingRect:(struct CGSize)arg3;
- (void)_resizeAccordingToTextView:(NSObject *)arg0;
- (float)minimumLineFragmentWidth;
- (NSTextContainer *)initWithContainerSize:(struct CGSize)arg0;
- (void)replaceLayoutManager:(NSObject *)arg0;
- (void)setMinimumLineFragmentWidth:(float)arg0;

@end
