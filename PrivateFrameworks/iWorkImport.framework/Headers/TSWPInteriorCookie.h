/* Runtime dump - TSWPInteriorCookie
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPInteriorCookie : NSObject
{
    TSWPColumn * _column;
    TSWPShapeLayout * _shapeLayout;
}

@property (nonatomic) TSWPColumn * column;
@property (nonatomic) TSWPShapeLayout * layout;

- (TSWPShapeLayout *)layout;
- (void)setLayout:(TSWPShapeLayout *)arg0;
- (TSWPColumn *)column;
- (void)setColumn:(TSWPColumn *)arg0;

@end
