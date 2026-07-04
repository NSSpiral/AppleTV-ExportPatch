/* Runtime dump - CDDServerResponder
 * Image: /System/Library/PrivateFrameworks/CoreDuetDaemonProtocol.framework/CoreDuetDaemonProtocol
 */

@interface CDDServerResponder : NSObject
{
    CDDebug * _debug;
}

@property (readonly) CDDebug * debug;

- (CDDebug *)debug;
- (CDDServerResponder *)init;
- (void).cxx_destruct;
- (NSError *)messageWithError:(id *)arg0;
- (NSObject *)makeStashWithId:(unsigned long long)arg0;
- (char)sendMessageOnConnection:(NSURLConnection *)arg0 usingMessage:(NSString *)arg1 withSequenceNumber:(unsigned long long)arg2 type:(int)arg3 nameKey:(NSString *)arg4 name:(NSString *)arg5 error:(id *)arg6;
- (char)sendMessageOnConnection:(NSURLConnection *)arg0 usingMessage:(NSString *)arg1 withSequenceNumber:(unsigned long long)arg2 type:(int)arg3 error:(id *)arg4;
- (char)sendMessageOnConnection:(NSURLConnection *)arg0 usingMessage:(NSString *)arg1 withSequenceNumber:(unsigned long long)arg2 type:(int)arg3 valueKey:(NSString *)arg4 value:(unsigned long long)arg5 error:(id *)arg6;
- (char)sendMessageOnConnection:(NSURLConnection *)arg0 usingMessage:(NSString *)arg1 withSequenceNumber:(unsigned long long)arg2 type:(int)arg3 dictionaryKey:(NSObject<NSCopying> *)arg4 dictionary:(NSDictionary *)arg5 error:(id *)arg6;
- (char)sendMessageOnConnection:(NSURLConnection *)arg0 usingMessage:(NSString *)arg1 withSequenceNumber:(unsigned long long)arg2 type:(int)arg3 nameKey:(NSString *)arg4 name:(NSString *)arg5 valueKey:(NSString *)arg6 value:(long long)arg7 error:(id *)arg8;
- (char)sendMessageOnConnection:(NSURLConnection *)arg0 usingMessage:(NSString *)arg1 withSequenceNumber:(unsigned long long)arg2 type:(int)arg3 nameKey:(NSString *)arg4 name:(NSString *)arg5 dictionaryKey:(NSObject<NSCopying> *)arg6 dictionary:(NSDictionary *)arg7 error:(id *)arg8;
- (char)respondIndicatingProtocolErrorOnConnection:(NSURLConnection *)arg0 usingMessage:(NSString *)arg1 withSequenceNumber:(unsigned long long)arg2 protocolErrorNumber:(int)arg3 error:(id *)arg4;
- (char)respondToDebugBitmapOnConnection:(NSURLConnection *)arg0 usingMessage:(NSString *)arg1 withSequenceNumber:(unsigned long long)arg2 error:(id *)arg3;
- (char)respondToVersionOnConnection:(NSURLConnection *)arg0 usingMessage:(NSString *)arg1 withSequenceNumber:(unsigned long long)arg2 error:(id *)arg3;
- (char)respondToForecastAttributeIdOnConnection:(NSURLConnection *)arg0 usingMessage:(NSString *)arg1 withSequenceNumber:(unsigned long long)arg2 resultDictionary:(NSDictionary *)arg3 error:(id *)arg4;
- (char)respondToRegisterPoolOnConnection:(NSURLConnection *)arg0 usingMessage:(NSString *)arg1 withSequenceNumber:(unsigned long long)arg2 initialValue:(long long)arg3 integerId:(unsigned long long)arg4 error:(id *)arg5;
- (char)respondToRegisterChildPoolOnConnection:(NSURLConnection *)arg0 usingMessage:(NSString *)arg1 withSequenceNumber:(unsigned long long)arg2 initialValue:(long long)arg3 integerId:(unsigned long long)arg4 error:(id *)arg5;
- (char)respondToIdForPoolOnConnection:(NSURLConnection *)arg0 usingMessage:(NSString *)arg1 withSequenceNumber:(unsigned long long)arg2 integerId:(unsigned long long)arg3 error:(id *)arg4;
- (char)respondToDeletePoolOnConnection:(NSURLConnection *)arg0 usingMessage:(NSString *)arg1 withSequenceNumber:(unsigned long long)arg2 error:(id *)arg3;
- (char)respondToReadPoolOnConnection:(NSURLConnection *)arg0 usingMessage:(NSString *)arg1 withSequenceNumber:(unsigned long long)arg2 readValue:(long long)arg3 error:(id *)arg4;
- (char)respondToCompareAndSwapPoolOnConnection:(NSURLConnection *)arg0 usingMessage:(NSString *)arg1 withSequenceNumber:(unsigned long long)arg2 finalValue:(long long)arg3 error:(id *)arg4;
- (char)respondToIncrementPoolOnConnection:(NSURLConnection *)arg0 usingMessage:(NSString *)arg1 withSequenceNumber:(unsigned long long)arg2 incrementedValue:(long long)arg3 error:(id *)arg4;
- (char)respondToDecrementPoolOnConnection:(NSURLConnection *)arg0 usingMessage:(NSString *)arg1 withSequenceNumber:(unsigned long long)arg2 decrementedValue:(long long)arg3 error:(id *)arg4;
- (char)respondToTrendingAppsOnConnection:(NSURLConnection *)arg0 usingMessage:(NSString *)arg1 withSequenceNumber:(unsigned long long)arg2 responseDictionary:(NSDictionary *)arg3 error:(id *)arg4;
- (char)respondToLiveAppsOnConnection:(NSURLConnection *)arg0 usingMessage:(NSString *)arg1 withSequenceNumber:(unsigned long long)arg2 responseDictionary:(NSDictionary *)arg3 error:(id *)arg4;
- (char)respondToRegisterTrendableAppOnConnection:(NSURLConnection *)arg0 usingMessage:(NSString *)arg1 withSequenceNumber:(unsigned long long)arg2 error:(id *)arg3;
- (char)respondToDeregisterTrendableAppOnConnection:(NSURLConnection *)arg0 usingMessage:(NSString *)arg1 withSequenceNumber:(unsigned long long)arg2 error:(id *)arg3;
- (char)respondToBundleIdEntriesOlderThanDateOnConnection:(NSURLConnection *)arg0 usingMessage:(NSString *)arg1 withSequenceNumber:(unsigned long long)arg2 status:(char)arg3 error:(id *)arg4;
- (char)respondToDeleteBundleIdOnConnection:(NSURLConnection *)arg0 usingMessage:(NSString *)arg1 withSequenceNumber:(unsigned long long)arg2 error:(id *)arg3;
- (char)respondToDeleteAttributeIdOnConnection:(NSURLConnection *)arg0 usingMessage:(NSString *)arg1 withSequenceNumber:(unsigned long long)arg2 error:(id *)arg3;
- (char)respondToDeleteAllDatabaseEntriesOlderThanDateOnConnection:(NSURLConnection *)arg0 usingMessage:(NSString *)arg1 withSequenceNumber:(unsigned long long)arg2 error:(id *)arg3;
- (char)respondToAppsLaunchedButNotPrewarmedSinceDateOnConnection:(NSURLConnection *)arg0 usingMessage:(NSString *)arg1 withSequenceNumber:(unsigned long long)arg2 responseDictionary:(NSDictionary *)arg3 error:(id *)arg4;
- (char)respondToRegisterAttributeOnConnection:(NSURLConnection *)arg0 usingMessage:(NSString *)arg1 withSequenceNumber:(unsigned long long)arg2 registeredAttributeId:(unsigned long long)arg3 error:(id *)arg4;
- (char)respondToIdForAttributeOnConnection:(NSURLConnection *)arg0 usingMessage:(NSString *)arg1 withSequenceNumber:(unsigned long long)arg2 attributeId:(unsigned long long)arg3 error:(id *)arg4;
- (char)respondToAttributeOccurredOnConnection:(NSURLConnection *)arg0 usingMessage:(NSString *)arg1 withSequenceNumber:(unsigned long long)arg2 error:(id *)arg3;
- (char)respondToAttributeNamesOnConnection:(NSURLConnection *)arg0 usingMessage:(NSString *)arg1 withSequenceNumber:(unsigned long long)arg2 resultDictionary:(NSDictionary *)arg3 error:(id *)arg4;
- (char)respondToPoolNamesOnConnection:(NSURLConnection *)arg0 usingMessage:(NSString *)arg1 withSequenceNumber:(unsigned long long)arg2 resultDictionary:(NSDictionary *)arg3 error:(id *)arg4;
- (char)respondToDeleteDataForClientIdOnConnection:(NSURLConnection *)arg0 usingMessage:(NSString *)arg1 withSequenceNumber:(unsigned long long)arg2 error:(id *)arg3;
- (char)respondToAdmissionCheckOnConnection:(NSURLConnection *)arg0 usingMessage:(NSString *)arg1 withSequenceNumber:(unsigned long long)arg2 admissionGranted:(char)arg3 grantValiditySeconds:(unsigned long long)arg4 admissionCondition:(unsigned long long)arg5 error:(id *)arg6;
- (char)respondToAssociateToBudgetOnConnection:(NSURLConnection *)arg0 usingMessage:(NSString *)arg1 withSequenceNumber:(unsigned long long)arg2 error:(id *)arg3;
- (char)respondToSetCategoryOnConnection:(NSURLConnection *)arg0 usingMessage:(NSString *)arg1 withSequenceNumber:(unsigned long long)arg2 error:(id *)arg3;
- (char)respondToSetCtlOnConnection:(NSURLConnection *)arg0 usingMessage:(NSString *)arg1 withSequenceNumber:(unsigned long long)arg2 error:(id *)arg3;
- (char)respondToGetCtlOnConnection:(NSURLConnection *)arg0 usingMessage:(NSString *)arg1 withSequenceNumber:(unsigned long long)arg2 mitigationDictionary:(NSDictionary *)arg3 error:(id *)arg4;
- (char)respondToAttributeStatisticOnConnection:(NSURLConnection *)arg0 usingMessage:(NSString *)arg1 withSequenceNumber:(unsigned long long)arg2 statisticsDictionary:(NSDictionary *)arg3 error:(id *)arg4;
- (char)respondToAttributeRepeatedStatisticOnConnection:(NSURLConnection *)arg0 usingMessage:(NSString *)arg1 withSequenceNumber:(unsigned long long)arg2 statisticsArray:(NSArray *)arg3 error:(id *)arg4;
- (char)respondToMeteringForAttributeOnConnection:(NSURLConnection *)arg0 usingMessage:(NSString *)arg1 withSequenceNumber:(unsigned long long)arg2 meterToken:(unsigned long long)arg3 error:(id *)arg4;
- (char)respondToRegisterForSignoff:(id)arg0 usingMessage:(NSString *)arg1 withSequenceNumber:(unsigned long long)arg2 error:(id *)arg3;
- (char)respondToSignoffConditionsChangedOnConnection:(NSURLConnection *)arg0 usingMessage:(NSString *)arg1 withSequenceNumber:(unsigned long long)arg2 error:(id *)arg3;
- (char)respondToHistoryQueryOnConnection:(NSURLConnection *)arg0 usingMessage:(NSString *)arg1 withSequenceNumber:(unsigned long long)arg2 resultDictionary:(NSDictionary *)arg3 error:(id *)arg4;
- (char)respondToBudgetsForAttributeIdOnConnection:(NSURLConnection *)arg0 usingMessage:(NSString *)arg1 withSequenceNumber:(unsigned long long)arg2 responseDictionary:(NSDictionary *)arg3 error:(id *)arg4;
- (char)respondToRemoteFocalAppsOnConnection:(NSURLConnection *)arg0 usingMessage:(NSString *)arg1 withSequenceNumber:(unsigned long long)arg2 responseDictionary:(NSDictionary *)arg3 error:(id *)arg4;
- (char)respondToGetDevicesOnConnection:(NSURLConnection *)arg0 usingMessage:(NSString *)arg1 withSequenceNumber:(unsigned long long)arg2 responseDictionary:(NSDictionary *)arg3 error:(id *)arg4;
- (char)respondToGetDeviceFromDescriptionOnConnection:(NSURLConnection *)arg0 usingMessage:(NSString *)arg1 withSequenceNumber:(unsigned long long)arg2 responseDictionary:(NSDictionary *)arg3 error:(id *)arg4;
- (char)respondToReadSystemDataFromDeviceOnConnection:(NSURLConnection *)arg0 usingMessage:(NSString *)arg1 withSequenceNumber:(unsigned long long)arg2 responseDictionary:(NSDictionary *)arg3 error:(id *)arg4;
- (char)respondToBroadcastSystemDataOnConnection:(NSURLConnection *)arg0 usingMessage:(NSString *)arg1 withSequenceNumber:(unsigned long long)arg2 error:(id *)arg3;
- (char)respondToAttributeReset:(NSSet *)arg0 usingMessage:(NSString *)arg1 withSequenceNumber:(unsigned long long)arg2 error:(id *)arg3;
- (char)respondToSetAdmissionMask:(NSObject *)arg0 usingMessage:(NSString *)arg1 withSequenceNumber:(unsigned long long)arg2 error:(id *)arg3;
- (char)respondToResetAdmissionMask:(NSObject *)arg0 usingMessage:(NSString *)arg1 withSequenceNumber:(unsigned long long)arg2 error:(id *)arg3;
- (char)respondToRequestSystemDataFromDeviceOnConnection:(NSURLConnection *)arg0 usingMessage:(NSString *)arg1 withSequenceNumber:(unsigned long long)arg2 error:(id *)arg3;
- (char)respondToRequestDeviceForecastDataOnConnection:(NSURLConnection *)arg0 usingMessage:(NSString *)arg1 withSequenceNumber:(unsigned long long)arg2 responseDictionary:(NSDictionary *)arg3 error:(id *)arg4;
- (char)respondToRequestDeviceStatisticDataOnConnection:(NSURLConnection *)arg0 usingMessage:(NSString *)arg1 withSequenceNumber:(unsigned long long)arg2 responseDictionary:(NSDictionary *)arg3 error:(id *)arg4;
- (char)respondToReadRemoteRequestResultOnConnection:(NSURLConnection *)arg0 usingMessage:(NSString *)arg1 withSequenceNumber:(unsigned long long)arg2 responseKey:(char *)arg3 responseDictionary:(NSDictionary *)arg4 error:(id *)arg5;
- (char)respondToSetManualType:(NSObject *)arg0 usingMessage:(NSString *)arg1 withSequenceNumber:(unsigned long long)arg2 error:(id *)arg3;
- (char)respondToTriggerSystemDataExchange:(id)arg0 usingMessage:(NSString *)arg1 withSequenceNumber:(unsigned long long)arg2 error:(id *)arg3;
- (char)respondToGetRemoteSystemDataOnConnection:(NSURLConnection *)arg0 usingMessage:(NSString *)arg1 withSequenceNumber:(unsigned long long)arg2 responseDictionary:(NSDictionary *)arg3 error:(id *)arg4;
- (char)respondToAdmissionCheckAndStartedOnConnection:(NSURLConnection *)arg0 usingMessage:(NSString *)arg1 withSequenceNumber:(unsigned long long)arg2 admissionGranted:(char)arg3 grantValiditySeconds:(unsigned long long)arg4 admissionCondition:(unsigned long long)arg5 error:(id *)arg6;
- (char)respondToBundleIdChangeOnConnection:(NSURLConnection *)arg0 usingMessage:(NSString *)arg1 withSequenceNumber:(unsigned long long)arg2 responseDictionary:(NSDictionary *)arg3 error:(id *)arg4;
- (char)respondToSetNonAppFocalOnConnection:(NSURLConnection *)arg0 usingMessage:(NSString *)arg1 withSequenceNumber:(unsigned long long)arg2 error:(id *)arg3;
- (char)respondToRequestAdmissionLogFromDeviceOnConnection:(NSURLConnection *)arg0 usingMessage:(NSString *)arg1 withSequenceNumber:(unsigned long long)arg2 error:(id *)arg3;
- (char)respondToLocalFocalAppsOnConnection:(NSURLConnection *)arg0 usingMessage:(NSString *)arg1 withSequenceNumber:(unsigned long long)arg2 responseDictionary:(NSDictionary *)arg3 error:(id *)arg4;

@end
