/* Runtime dump - HMPendingFetchedRecordsTuple
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMPendingFetchedRecordsTuple : NSObject
{
    NSData * _encodedData1;
    NSData * _encodedData2;
}

@property (retain, nonatomic) NSData * encodedData1;
@property (retain, nonatomic) NSData * encodedData2;

+ (NSData *)tupleWithEncodedData:(NSData *)arg0 encodedDataVersion2:(NSString *)arg1;

- (void).cxx_destruct;
- (void)setEncodedData1:(NSData *)arg0;
- (void)setEncodedData2:(NSData *)arg0;
- (NSData *)encodedData1;
- (NSData *)encodedData2;

@end
