/* Runtime dump - OABShapeBaseManager
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OABShapeBaseManager : OABFillPropertiesManager <OABBasePropertiesManager>
{
    struct EshShapeBase * mShapeBase;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (struct EshColor)shadowColor;
- (int)shadowAlpha;
- (char)isStroked;
- (struct EshColor)strokeFgColor;
- (struct EshColor)strokeBgColor;
- (int)strokeFillType;
- (unsigned int)strokeFillBlipID;
- (NSString *)strokeFillBlipName;
- (int)strokeFgAlpha;
- (int)strokeMiterLimit;
- (int)strokeCompoundType;
- (int)strokePresetDash;
- (struct EshTablePropVal<int> *)strokeCustomDash;
- (int)strokeCapStyle;
- (int)strokeJoinStyle;
- (int)strokeStartArrowType;
- (int)strokeStartArrowWidth;
- (int)strokeStartArrowLength;
- (int)strokeEndArrowType;
- (int)strokeEndArrowWidth;
- (int)strokeEndArrowLength;
- (char)isShadowed;
- (int)shadowType;
- (long)shadowOffsetX;
- (long)shadowOffsetY;
- (long)shadowSoftness;
- (OABShapeBaseManager *)initWithShapeBase:(struct EshShapeBase *)arg0 shapeType:(struct ChMap<unsigned int, EshOpt::Value, CsLess<unsigned int> >)arg1 masterShape:(struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, EshOpt::Value>, void *> > >)arg2;
- (long)strokeWidth;

@end
