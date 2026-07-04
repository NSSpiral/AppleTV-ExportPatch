/* Runtime dump - SCNMaterialAttachment
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNMaterialAttachment : NSObject
{
    unsigned int glID;
    unsigned int target;
    void * context;
    struct CGSize size;
    NSDictionary * options;
}

@property (nonatomic) unsigned int glID;
@property (nonatomic) unsigned int target;
@property (nonatomic) void * context;
@property (nonatomic) struct CGSize size;
@property (copy, nonatomic) NSDictionary * options;

- (unsigned int)glID;
- (void)setGlID:(unsigned int)arg0;
- (void)dealloc;
- (struct CGSize)size;
- (void)setTarget:(unsigned int)arg0;
- (unsigned int)target;
- (void)setSize:(struct CGSize)arg0;
- (void *)context;
- (void)setContext:(void *)arg0;
- (void)setOptions:(NSDictionary *)arg0;
- (NSDictionary *)options;

@end
