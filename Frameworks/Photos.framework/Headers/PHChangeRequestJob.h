/* Runtime dump - PHChangeRequestJob
 * Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHChangeRequestJob : PLDaemonJob
{
    NSSet * _inserts;
    NSSet * _updates;
    NSSet * _deletes;
    id _completionHandler;
    NSObject<OS_xpc_object> * _xpcInserts;
    NSObject<OS_xpc_object> * _xpcUpdates;
    NSObject<OS_xpc_object> * _xpcDeletes;
}

@property (copy, nonatomic) NSSet * inserts;
@property (copy, nonatomic) NSSet * updates;
@property (copy, nonatomic) NSSet * deletes;
@property (copy, nonatomic) id completionHandler;
@property (retain, nonatomic) NSObject<OS_xpc_object> * xpcInserts;
@property (retain, nonatomic) NSObject<OS_xpc_object> * xpcUpdates;
@property (retain, nonatomic) NSObject<OS_xpc_object> * xpcDeletes;

+ (void)applyPhotoKitInserts:(id)arg0 updates:(NSSet *)arg1 deletes:(NSSet *)arg2 completionHandler:(id /* block */)arg3;
+ (void)_addChangeRequests:(id)arg0 toXPCDict:(id)arg1 withKey:(char *)arg2;

- (NSSet *)inserts;
- (NSSet *)deletes;
- (void)setInserts:(NSSet *)arg0;
- (void)setUpdates:(NSSet *)arg0;
- (void)setDeletes:(NSSet *)arg0;
- (void)setXpcInserts:(NSObject<OS_xpc_object> *)arg0;
- (void)setXpcUpdates:(NSObject<OS_xpc_object> *)arg0;
- (void)setXpcDeletes:(NSObject<OS_xpc_object> *)arg0;
- (NSObject<OS_xpc_object> *)xpcInserts;
- (NSObject<OS_xpc_object> *)xpcUpdates;
- (NSObject<OS_xpc_object> *)xpcDeletes;
- (id /* block */)completionHandler;
- (void)run;
- (void).cxx_destruct;
- (void)setCompletionHandler:(id /* block */)arg0;
- (void)encodeToXPCObject:(NSObject *)arg0;
- (PHChangeRequestJob *)initFromXPCObject:(NSObject *)arg0 connection:(NSURLConnection *)arg1;
- (void)runDaemonSide;
- (long long)daemonOperation;
- (void)handleReply;
- (NSSet *)updates;

@end
