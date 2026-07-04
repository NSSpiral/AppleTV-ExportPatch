/* Runtime dump - TSWPPadding
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPPadding : NSObject <TSSPropertyCommandSerializing, TSDMixing>
{
    float _topInset;
    float _leftInset;
    float _bottomInset;
    float _rightInset;
}

@property (nonatomic) float topInset;
@property (nonatomic) float leftInset;
@property (nonatomic) float bottomInset;
@property (nonatomic) float rightInset;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSSet *)paddingWithTopInset:(float)arg0 leftInset:(float)arg1 bottomInset:(float)arg2 rightInset:(float)arg3;
+ (struct UIEdgeInsets)padding;

- (void)saveToArchive:(struct PaddingArchive *)arg0 archiver:(NSObject *)arg1;
- (TSWPPadding *)initWithArchive:(struct PaddingArchive *)arg0 unarchiver:(struct PaddingArchive)arg1;
- (NSObject *)mixedObjectWithFraction:(float)arg0 ofObject:(NSObject *)arg1;
- (int)mixingTypeWithObject:(NSObject *)arg0 context:(NSObject *)arg1;
- (TSWPPadding *)initFromPropertyCommandMessage:(struct Message *)arg0 unarchiver:(struct Message)arg1;
- (void)saveToPropertyCommandMessage:(struct Message *)arg0 archiver:(NSObject *)arg1;
- (TSWPPadding *)initWithTopInset:(float)arg0 leftInset:(float)arg1 bottomInset:(float)arg2 rightInset:(float)arg3;
- (void)transform:(struct CGAffineTransform)arg0;
- (TSWPPadding *)init;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (TSWPPadding *)copyWithZone:(struct _NSZone *)arg0;
- (float)topInset;
- (float)leftInset;
- (float)bottomInset;
- (float)rightInset;
- (void)setLeftInset:(float)arg0;
- (void)setTopInset:(float)arg0;
- (void)setRightInset:(float)arg0;
- (void)setBottomInset:(float)arg0;

@end
