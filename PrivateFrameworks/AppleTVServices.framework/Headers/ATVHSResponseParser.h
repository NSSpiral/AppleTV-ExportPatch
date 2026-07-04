/* Runtime dump - ATVHSResponseParser
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVHSResponseParser : NSObject
{
    char * _bytePtr;
    unsigned long _byteOffset;
    unsigned long _dataLength;
    NSData * _responseData;
    ATVDataClient * _dataClient;
}

@property (retain, nonatomic) NSData * responseData;
@property (nonatomic) ATVDataClient * dataClient;

- (unsigned long)unsignedIntValue;
- (void).cxx_destruct;
- (ATVDataClient *)dataClient;
- (void)setDataClient:(ATVDataClient *)arg0;
- (ATVHSResponseParser *)initWithResponse:(NSURLResponse *)arg0 dataClient:(ATVDataClient *)arg1;
- (NSObject *)parseWithQuery:(NSObject *)arg0 error:(id *)arg1;
- (void)setResponseData:(NSData *)arg0;
- (NSObject *)parseDMAPErrorResponseWithQuery:(NSObject *)arg0;
- (NSObject *)parseDPAPResponseWithQuery:(NSObject *)arg0 responseCode:(unsigned long)arg1 contentSize:(unsigned long)arg2;
- (NSObject *)parseDAAPResponseWithQuery:(NSObject *)arg0 responseCode:(unsigned long)arg1 contentSize:(unsigned long)arg2;
- (unsigned long)intValueForCode:(unsigned long)arg0;
- (NSData *)responseData;

@end
