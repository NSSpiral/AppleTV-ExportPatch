/* Runtime dump - TSCH3DGLHandle
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DGLHandle : TSCH3DResourceHandle
{
    unsigned int mValue;
}

@property (readonly, nonatomic) unsigned int value;

+ (TSCH3DGLHandle *)handleWithGLHandle:(unsigned int)arg0;

- (TSCH3DGLHandle *)initWithGLHandle:(unsigned int)arg0;
- (void)dealloc;
- (NSString *)description;
- (unsigned int)value;
- (void)setValue:(unsigned int)arg0;

@end
