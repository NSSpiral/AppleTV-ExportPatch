/* Runtime dump - TPTextWrapCookie
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPTextWrapCookie : NSObject
{
    TSDLayout<TSWPLayoutTarget> * _target;
    NSMutableArray * _floatingWrappables;
    TSUPointerKeyDictionary * _wrapSegmentsInverseTransformInRootDictionary;
    TSWPColumn * _column;
    TSDWrapSegments * _interiorWrapSegments;
    struct CGAffineTransform _targetInverseTransformInRoot;
}

@property (retain, nonatomic) TSWPColumn * column;
@property (nonatomic) TSDLayout<TSWPLayoutTarget> * target;
@property (readonly, retain, nonatomic) NSArray * floatingWrappables;
@property (retain, nonatomic) TSDWrapSegments * interiorWrapSegments;
@property (readonly, nonatomic) struct CGAffineTransform targetInverseTransformInRoot;

+ (TPTextWrapCookie *)textWrapCookieForColumn:(id)arg0 targetLayout:(NSObject *)arg1;

- (TSDWrapSegments *)interiorWrapSegments;
- (TPTextWrapCookie *)initWithColumn:(TSWPColumn *)arg0 targetLayout:(NSObject *)arg1;
- (void)addFloatingWrappable:(id)arg0;
- (NSArray *)floatingWrappables;
- (struct CGAffineTransform)targetInverseTransformInRoot;
- (id)transformedWrapSegmentsForWrappable:(id)arg0 canvasSpaceToWrapSpaceTransform:(struct CGAffineTransform)arg1;
- (void)setInteriorWrapSegments:(TSDWrapSegments *)arg0;
- (void)dealloc;
- (void)setTarget:(TSDLayout<TSWPLayoutTarget> *)arg0;
- (TSDLayout<TSWPLayoutTarget> *)target;
- (TSWPColumn *)column;
- (void)setColumn:(TSWPColumn *)arg0;

@end
