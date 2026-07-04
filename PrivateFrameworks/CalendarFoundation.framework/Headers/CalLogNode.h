/* Runtime dump - CalLogNode
 * Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface CalLogNode : NSObject
{
    NSMutableArray * _subnodes;
    NSObject<OS_dispatch_group> * _dispatchGroup;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    CalLogFilter * _filter;
    <CalLogWriter> * _writer;
    NSMutableArray * _accumulator;
    unsigned int _accumulatorBufferSize;
}

@property (retain, nonatomic) CalLogFilter * filter;
@property (nonatomic) unsigned int accumulatorBufferSize;
@property (retain, nonatomic) <CalLogWriter> * writer;
@property (retain, nonatomic) NSMutableArray * subnodes;
@property (retain, nonatomic) NSMutableArray * accumulator;

- (CalLogNode *)init;
- (char)flush;
- (void)setFilter:(CalLogFilter *)arg0;
- (void).cxx_destruct;
- (void)processEnvelope:(id)arg0;
- (void)setAccumulatorBufferSize:(unsigned int)arg0;
- (void)addSubnode:(id)arg0;
- (int)minimumLevelOfNodeTree;
- (NSMutableArray *)accumulator;
- (NSMutableArray *)subnodes;
- (void)flushAccumulator;
- (unsigned int)accumulatorBufferSize;
- (void)setAccumulator:(NSMutableArray *)arg0;
- (void)clearAccumulator;
- (void)removeSubnode:(id)arg0;
- (id)allSubnodes;
- (void)setSubnodes:(NSMutableArray *)arg0;
- (<CalLogWriter> *)writer;
- (void)setWriter:(<CalLogWriter> *)arg0;
- (CalLogFilter *)filter;

@end
