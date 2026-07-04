/* Runtime dump - TSUDispatchData
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUDispatchData : NSObject
{
    NSObject<OS_dispatch_data> * _data;
    char _alwaysDefragmentData;
    unsigned long _size;
    unsigned int _maxFragmentsCount;
    NSObject<OS_dispatch_data> * _fragmentedData;
    NSObject<OS_dispatch_data> * _defragmentedData;
    unsigned int _fragmentsCount;
}

@property (nonatomic) char alwaysDefragmentData;
@property (readonly, nonatomic) NSObject<OS_dispatch_data> * data;
@property (readonly, nonatomic) unsigned long size;
@property (nonatomic) unsigned int maxFragmentsCount;
@property (readonly, nonatomic) NSObject<OS_dispatch_data> * fragmentedData;
@property (readonly, nonatomic) NSObject<OS_dispatch_data> * defragmentedData;
@property (readonly, nonatomic) unsigned int fragmentsCount;

- (void)defragmentData;
- (char)alwaysDefragmentData;
- (void)setAlwaysDefragmentData:(char)arg0;
- (unsigned int)maxFragmentsCount;
- (void)setMaxFragmentsCount:(unsigned int)arg0;
- (NSObject<OS_dispatch_data> *)fragmentedData;
- (NSObject<OS_dispatch_data> *)defragmentedData;
- (unsigned int)fragmentsCount;
- (unsigned long)size;
- (TSUDispatchData *)init;
- (NSObject<OS_dispatch_data> *)data;
- (TSUDispatchData *)initWithData:(NSObject<OS_dispatch_data> *)arg0;
- (void).cxx_destruct;
- (void)append:(id)arg0;

@end
