/* Runtime dump - VKModelObject_DrawPass
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKModelObject_DrawPass : NSObject
{
    unsigned char _pass;
    VKModelObject * _submodel;
}

@property (nonatomic) unsigned char pass;
@property (retain, nonatomic) VKModelObject * submodel;

- (void)dealloc;
- (NSString *)description;
- (VKModelObject *)submodel;
- (void)setSubmodel:(VKModelObject *)arg0;
- (unsigned char)pass;
- (void)setPass:(unsigned char)arg0;

@end
