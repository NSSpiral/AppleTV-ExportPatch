/* Runtime dump - CLNotifierData
 * Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CLNotifierData : NSObject
{
    void * _data;
    id _destructor;
}

@property (nonatomic) void * data;
@property (copy, nonatomic) id destructor;

- (CLNotifierData *)initWithData:(void *)arg0 destructor:(id)arg1;
- (void)setDestructor:(id)arg0;
- (id)destructor;
- (void)dealloc;
- (void *)data;
- (void)setData:(void *)arg0;
- (void).cxx_destruct;

@end
