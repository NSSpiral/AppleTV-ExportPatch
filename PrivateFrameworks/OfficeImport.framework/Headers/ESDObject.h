/* Runtime dump - ESDObject
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ESDObject : NSObject
{
    struct EshObject * mEshObject;
    ESDContainer * mParent;
    BOOL mIsChart;
}

- (void)dealloc;
- (ESDObject *)initWithType:(unsigned short)arg0;
- (struct EshObject *)eshObject;
- (struct EshGroup *)eshGroup;
- (BOOL)isChart;
- (struct EshShape *)eshShape;
- (ESDObject *)initFromReader:(struct OcReader *)arg0 type:(NSObject *)arg1 version:(unsigned short)arg2;
- (void)setChart:(BOOL)arg0;
- (int)shapeID;
- (ESDObject *)initWithEshObject:(struct EshObject *)arg0;
- (void)writeToWriter:(struct OcWriter *)arg0;
- (NSObject *)ebInitWithType:(unsigned short)arg0 version:(unsigned short)arg1 state:(NSObject *)arg2;
- (NSObject *)pbInitWithType:(unsigned short)arg0 version:(unsigned short)arg1 state:(NSObject *)arg2;
- (GLKShaderBlockNode *)parent;

@end
