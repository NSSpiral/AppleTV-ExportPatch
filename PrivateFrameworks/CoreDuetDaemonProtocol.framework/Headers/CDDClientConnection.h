/* Runtime dump - CDDClientConnection
 * Image: /System/Library/PrivateFrameworks/CoreDuetDaemonProtocol.framework/CoreDuetDaemonProtocol
 */

@interface CDDClientConnection : NSObject
{
    CDDXPCConnection * _connection;
    CDDebug * _debug;
    unsigned long long _clientId;
}

@property (readonly) CDDXPCConnection * connection;
@property (readonly) CDDebug * debug;
@property (readonly) unsigned long long clientId;

- (CDDebug *)debug;
- (CDDClientConnection *)init;
- (void).cxx_destruct;
- (CDDXPCConnection *)connection;
- (char)readSystemDataFromDevice:(unsigned int)arg0 error:(id *)arg1 replyHandler:(id /* block */)arg2;
- (char)requestSystemDataFromDevice:(unsigned int)arg0 error:(id *)arg1 replyHandler:(id /* block */)arg2;
- (char)requestAdmissionLogFromDevice:(unsigned int)arg0 error:(id *)arg1 replyHandler:(id /* block */)arg2;
- (char)attributeNamesWithError:(id *)arg0 replyHandler:(id /* block */)arg1;
- (char)poolNamesWithError:(id *)arg0 replyHandler:(id /* block */)arg1;
- (char)idForAttribute:(NSObject *)arg0 clientId:(long long)arg1 error:(id *)arg2 replyHandler:(id /* block */)arg3;
- (char)idForPool:(NSObject *)arg0 error:(id *)arg1 replyHandler:(id /* block */)arg2;
- (char)registerAttribute:(NSObject *)arg0 withType:(int)arg1 dataProtectionClass:(NSObject *)arg2 error:(id *)arg3 replyHandler:(id /* block */)arg4;
- (char)registerPool:(NSObject *)arg0 withInitialValue:(long long)arg1 poolType:(long long)arg2 error:(id *)arg3 replyHandler:(id /* block */)arg4;
- (char)deleteDataWithError:(id *)arg0 replyHandler:(id /* block */)arg1;
- (char)getDevicesWithError:(id *)arg0 replyHandler:(id /* block */)arg1;
- (char)getDeviceFromDescription:(NSString *)arg0 error:(id *)arg1 replyHandler:(id /* block */)arg2;
- (char)broadcastSystemDataWithError:(id *)arg0 replyHandler:(id /* block */)arg1;
- (char)setNonAppBundlId:(NSObject *)arg0 error:(id *)arg1 replyHandler:(id /* block */)arg2;
- (char)attributeId:(unsigned long long)arg0 occurredWithValue:(id)arg1 cost:(long long)arg2 onDate:(NSDate *)arg3 risingEdge:(char)arg4 fallingEdge:(char)arg5 type:(int)arg6 error:(id *)arg7 replyHandler:(id /* block */)arg8;
- (char)attributeId:(unsigned long long)arg0 setCategory:(unsigned long long)arg1 error:(id *)arg2 replyHandler:(id /* block */)arg3;
- (char)attributeId:(unsigned long long)arg0 associateToBudgetId:(unsigned long long)arg1 error:(id *)arg2 replyHandler:(id /* block */)arg3;
- (char)deleteAttributeId:(unsigned long long)arg0 error:(id *)arg1 replyHandler:(id /* block */)arg2;
- (char)attributeId:(unsigned long long)arg0 repeatedStatistic:(int)arg1 forHistoryWindow:(NSObject *)arg2 error:(id *)arg3 replyHandler:(id /* block */)arg4;
- (char)attributeId:(unsigned long long)arg0 statistic:(int)arg1 forHistoryWindow:(NSObject *)arg2 error:(id *)arg3 replyHandler:(id /* block */)arg4;
- (char)attributeId:(unsigned long long)arg0 admissionCheckOfValue:(id)arg1 admissionCheckType:(int)arg2 attributeType:(int)arg3 options:(NSDictionary *)arg4 cost:(long long)arg5 onDate:(NSDate *)arg6 risingEdge:(char)arg7 fallingEdge:(char)arg8 error:(id *)arg9 replyHandler:(id /* block */)arg10;
- (char)attributeId:(unsigned long long)arg0 admissionCheckOfValue:(id)arg1 admissionCheckType:(int)arg2 attributeType:(int)arg3 options:(NSDictionary *)arg4 error:(id *)arg5 replyHandler:(id /* block */)arg6;
- (char)budgetsForAttributeId:(unsigned long long)arg0 error:(id *)arg1 replyHandler:(id /* block */)arg2;
- (char)remoteFocalAppWithId:(unsigned long long)arg0 error:(id *)arg1 replyHandler:(id /* block */)arg2;
- (char)getLocalAppBundleId:(id *)arg0 replyHandler:(id /* block */)arg1;
- (char)bundleIdChange:(id *)arg0 replyHandler:(id /* block */)arg1;
- (char)attributeId:(unsigned long long)arg0 meteredWithValue:(id)arg1 costDictionary:(NSDictionary *)arg2 onDate:(NSDate *)arg3 risingEdge:(char)arg4 fallingEdge:(char)arg5 type:(int)arg6 meterToken:(unsigned long long)arg7 error:(id *)arg8 replyHandler:(id /* block */)arg9;
- (char)forecastAttributeId:(unsigned long long)arg0 value:(NSObject *)arg1 format:(int)arg2 historyWindow:(NSObject *)arg3 deviceIdentifier:(NSString *)arg4 temporalLeeway:(double)arg5 limitCount:(unsigned long long)arg6 error:(id *)arg7 replyHandler:(id /* block */)arg8;
- (char)attributeId:(unsigned long long)arg0 repeatedStatistic:(int)arg1 forHistoryWindow:(NSObject *)arg2 deviceIdentifier:(NSString *)arg3 error:(id *)arg4 replyHandler:(id /* block */)arg5;
- (char)attributeId:(unsigned long long)arg0 historyOfValue:(id)arg1 forWindow:(NSObject *)arg2 filter:(int)arg3 maximumElements:(unsigned long long)arg4 error:(id *)arg5 replyHandler:(id /* block */)arg6;
- (char)resetAttributeId:(unsigned long long)arg0 type:(int)arg1 error:(id *)arg2 replyHandler:(id /* block */)arg3;
- (char)setAdmissionMask:(unsigned long long)arg0 bitfield:(unsigned long long)arg1 error:(id *)arg2 replyHandler:(id /* block */)arg3;
- (char)resetAdmissionMask:(unsigned long long)arg0 bitfield:(unsigned long long)arg1 error:(id *)arg2 replyHandler:(id /* block */)arg3;
- (char)requestForecastFromDevice:(unsigned int)arg0 attributeId:(unsigned long long)arg1 value:(NSObject *)arg2 historyWindow:(NSObject *)arg3 format:(int)arg4 error:(id *)arg5 replyHandler:(id /* block */)arg6;
- (char)readRemoteRequestResult:(unsigned long long)arg0 error:(id *)arg1 replyHandler:(id /* block */)arg2;
- (char)requestStatisticFromDevice:(unsigned int)arg0 attributeId:(unsigned long long)arg1 statistic:(int)arg2 historyWindow:(NSObject *)arg3 error:(id *)arg4 replyHandler:(id /* block */)arg5;
- (char)setManualType:(unsigned long long)arg0 type:(char)arg1 error:(id *)arg2 replyHandler:(id /* block */)arg3;
- (char)incrementPool:(unsigned long long)arg0 incrementValue:(long long)arg1 type:(unsigned long long)arg2 error:(id *)arg3 replyHandler:(id /* block */)arg4;
- (char)decrementPool:(unsigned long long)arg0 decrementValue:(long long)arg1 type:(unsigned long long)arg2 error:(id *)arg3 replyHandler:(id /* block */)arg4;
- (char)compareAndSwapPool:(unsigned long long)arg0 compareValue:(long long)arg1 swapValue:(long long)arg2 type:(unsigned long long)arg3 error:(id *)arg4 replyHandler:(id /* block */)arg5;
- (char)deletePool:(unsigned long long)arg0 type:(unsigned long long)arg1 error:(id *)arg2 replyHandler:(id /* block */)arg3;
- (char)registerChildPool:(NSObject *)arg0 parentIntegerId:(unsigned long long)arg1 poolType:(long long)arg2 maxFraction:(double)arg3 error:(id *)arg4 replyHandler:(id /* block */)arg5;
- (NSError *)messageWithError:(id *)arg0;
- (char)sendMessageWithType:(int)arg0 error:(id *)arg1 replyHandler:(id /* block */)arg2;
- (char)sendMessageWithType:(int)arg0 nameKey:(NSString *)arg1 name:(NSString *)arg2 error:(id *)arg3 replyHandler:(id /* block */)arg4;
- (char)sendMessageWithType:(int)arg0 valueKey1:(NSString *)arg1 uint64Value1:(unsigned long long)arg2 valueKey2:(NSString *)arg3 uint64Value2:(unsigned long long)arg4 error:(id *)arg5 replyHandler:(id /* block */)arg6;
- (char)sendMessageWithType:(int)arg0 valueKey:(NSString *)arg1 uint64Value:(unsigned long long)arg2 error:(id *)arg3 replyHandler:(id /* block */)arg4;
- (char)sendMessageWithType:(int)arg0 valueKey1:(NSString *)arg1 int64Value1:(long long)arg2 valueKey2:(NSString *)arg3 uint64Value2:(unsigned long long)arg4 valueKey3:(NSString *)arg5 uint64Value3:(unsigned long long)arg6 error:(id *)arg7 replyHandler:(id /* block */)arg8;
- (char)sendMessageWithType:(int)arg0 nameKey:(NSString *)arg1 name:(NSString *)arg2 valueKey:(NSString *)arg3 int64Value:(long long)arg4 error:(id *)arg5 replyHandler:(id /* block */)arg6;
- (char)sendMessageWithType:(int)arg0 nameKey:(NSString *)arg1 name:(NSString *)arg2 typeField:(unsigned long long)arg3 integerId:(unsigned long long)arg4 error:(id *)arg5 replyHandler:(id /* block */)arg6;
- (char)sendMessageWithType:(int)arg0 nameKey:(NSString *)arg1 name:(NSString *)arg2 valueKey:(NSString *)arg3 int64Value:(long long)arg4 type:(unsigned long long)arg5 integerId:(unsigned long long)arg6 error:(id *)arg7 replyHandler:(id /* block */)arg8;
- (char)versionWithError:(id *)arg0 replyHandler:(id /* block */)arg1;
- (char)message:(NSString *)arg0 withReplyHandler:(id /* block */)arg1;
- (char)readTrendingAppsWithError:(id *)arg0 replyHandler:(id /* block */)arg1;
- (char)readLiveAppsWithError:(id *)arg0 replyHandler:(id /* block */)arg1;
- (char)registerTrendableApp:(id)arg0 error:(id *)arg1 replyHandler:(id /* block */)arg2;
- (char)deregisterTrendableApp:(id)arg0 error:(id *)arg1 replyHandler:(id /* block */)arg2;
- (char)bundleIdEntriesOlderThanDate:(NSDate *)arg0 error:(id *)arg1 replyHandler:(id /* block */)arg2;
- (char)deleteBundleId:(NSObject *)arg0 error:(id *)arg1 replyHandler:(id /* block */)arg2;
- (char)setDebugBitmap:(unsigned long long)arg0 error:(id *)arg1 replyHandler:(id /* block */)arg2;
- (char)deleteAllDatabaseEntriesOlderThanDate:(NSDate *)arg0 error:(id *)arg1 replyHandler:(id /* block */)arg2;
- (char)appsLaunchedSince:(id)arg0 butNotPrewarmedSince:(id)arg1 error:(id *)arg2 replyHandler:(id /* block */)arg3;
- (char)idForAttribute:(NSObject *)arg0 error:(id *)arg1 replyHandler:(id /* block */)arg2;
- (CDDClientConnection *)initWithClientId:(unsigned long long)arg0 error:(id *)arg1;
- (char)forecastAttributeId:(unsigned long long)arg0 value:(NSObject *)arg1 format:(int)arg2 historyWindow:(NSObject *)arg3 limitCount:(unsigned long long)arg4 error:(id *)arg5 replyHandler:(id /* block */)arg6;
- (char)readPool:(unsigned long long)arg0 type:(unsigned long long)arg1 error:(id *)arg2 replyHandler:(id /* block */)arg3;
- (unsigned long long)clientId;

@end
