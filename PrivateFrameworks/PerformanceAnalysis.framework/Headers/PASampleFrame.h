/* Runtime dump - PASampleFrame
 * Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
 */

@interface PASampleFrame : NSObject <PASerializable>
{
    PASampleFrame * _parentFrame;
    NSMutableSet * _childFrames;
    unsigned long long _address;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property unsigned long long address;
@property (readonly) unsigned long long symbolicationAddress;
@property (readonly) char isKernel;
@property (readonly) char isRootFrame;
@property (readonly) PASampleFrame * parentFrame;
@property (readonly) NSSet * childFrames;

+ (NSString *)classDictionaryKey;
+ (NSObject *)newInstanceWithoutReferencesFromBufferPosition:(void *)arg0;
+ (NSObject *)_newSampleFrameFromSerializedSampleFrame:(struct ? *)arg0;
+ (PASampleFrame *)addStack:(TSTStrokeLayerMergedStack *)arg0 toSetOfRootFrames:(id)arg1;
+ (NSObject *)newSampleFrameWithStackFrame:(struct pa_stack_frame *)arg0 andParent:(NSObject *)arg1;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSSet *)childFrames;
- (void)setAddress:(unsigned long long)arg0;
- (unsigned long long)address;
- (void)addSelfToSerializationDictionary:(NSDictionary *)arg0;
- (unsigned long)sizeInBytesForSerializedVersion;
- (char)addSelfToBufferAtPosition:(void *)arg0 withCompletedSerializationDictionary:(struct NSMutableDictionary *)arg1;
- (void)populateReferencesUsingBufferPosition:(void *)arg0 andDeserializationDictionary:(void)arg1 andDataBufferDictionary:(struct NSMutableDictionary *)arg2;
- (char)isKernel;
- (NSObject *)_initWithSerializedSampleFrame:(struct ? *)arg0;
- (unsigned long long)symbolicationAddress;
- (PASampleFrame *)initWithStackFrame:(struct pa_stack_frame *)arg0 andParent:(NSObject *)arg1;
- (PASampleFrame *)initWithSampleFrame:(PASampleFrame *)arg0 andParent:(NSObject *)arg1;
- (NSObject *)copyWithNewParent:(char)arg0;
- (void)_addChildFrame:(NSObject *)arg0;
- (void)querySymbolInformationForSelfAndChildrenUsingTask:(NSObject *)arg0 andKernelTask:(NSObject *)arg1 andSampleTimeSeriesDataStore:(NSObject *)arg2;
- (char)isRootFrame;
- (char)correspondsToStackshotFrame:(struct pa_stack_frame *)arg0;
- (PASampleFrame *)parentFrame;

@end
