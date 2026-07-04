/* Runtime dump - PAGenealogyTracker
 * Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
 */

@interface PAGenealogyTracker : NSObject <PASerializable>
{
    struct os_activity_watch_s * _messageWatcher;
    NSMutableDictionary * _messages;
    NSMutableDictionary * _breadcrumbs;
    NSMutableDictionary * _activityNames;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSString *)classDictionaryKey;
+ (NSObject *)newInstanceWithoutReferencesFromBufferPosition:(void *)arg0;

- (void)dealloc;
- (PAGenealogyTracker *)init;
- (void)addSelfToSerializationDictionary:(NSDictionary *)arg0;
- (unsigned long)sizeInBytesForSerializedVersion;
- (char)addSelfToBufferAtPosition:(void *)arg0 withCompletedSerializationDictionary:(NSDictionary *)arg1;
- (void)populateReferencesUsingBufferPosition:(void *)arg0 andDeserializationDictionary:(void)arg1 andDataBufferDictionary:(NSDictionary *)arg2;
- (NSObject *)breadcrumbsForProcess:(int)arg0 betweenMachStartTime:(double)arg1 andEndTime:(double)arg2;
- (NSObject *)activityNameForId:(unsigned long long)arg0;
- (NSObject *)messagesForThread:(unsigned long long)arg0 betweenMachStartTime:(double)arg1 andEndTime:(double)arg2;
- (void)trackGlobally;
- (void)_parseProcess:(struct os_activity_process_s *)arg0;
- (void)_addBreadcrumb:(struct os_activity_breadcrumb_s *)arg0 forProcess:(NSObject *)arg1 withActivityId:(unsigned long long)arg2;
- (void)_addActivityName:(char *)arg0 forId:(unsigned long long)arg1;
- (void)_addMessage:(struct os_trace_message_s *)arg0 withActivityId:(unsigned long long)arg1;
- (void)trackPid:(int)arg0;
- (void)trackProcessName:(NSString *)arg0;
- (void)stopTracking;

@end
