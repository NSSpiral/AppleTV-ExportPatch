/* Runtime dump - HSResponseDataParser
 * Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@interface HSResponseDataParser : NSObject

+ (NSData *)parseResponseData:(NSData *)arg0;
+ (NSData *)_parseErrorResponseWithBytes:(char *)arg0 length:(unsigned int)arg1;
+ (NSData *)enumerateRawItemsInResponseData:(NSData *)arg0 usingHandler:(id /* block */)arg1;
+ (HSResponseDataParser *)_parseResponseCode:(unsigned int)arg0 bytes:(char *)arg1 length:(unsigned int)arg2 usingHandler:(id /* block */)arg3;
+ (unsigned int)_parseItemPropertyCountWithBytes:(char *)arg0 length:(unsigned int)arg1;
+ (unsigned int)parseItemWithBytes:(char *)arg0 length:(unsigned int)arg1 valuesOut:(struct ? *)arg2 valuesCapacity:(unsigned int)arg3;
+ (void)parseItemWithBytes:(char *)arg0 length:(unsigned int)arg1 usingHandler:(id /* block */)arg2;
+ (NSData *)_parseDeletedIDListingWithBytes:(char *)arg0 length:(unsigned int)arg1;
+ (NSData *)_parseLoginResponseWithBytes:(char *)arg0 length:(unsigned int)arg1;
+ (NSData *)_parseItemsResponseWithBytes:(char *)arg0 length:(unsigned int)arg1 usingHandler:(id /* block */)arg2;
+ (NSData *)_parseUpdateResponseWithBytes:(char *)arg0 length:(unsigned int)arg1;
+ (NSData *)_parseAuthorizedAccountTokenWithBytes:(char *)arg0 length:(unsigned int)arg1;
+ (NSData *)_parseCloudArtworkInfoResponseWithBytes:(char *)arg0 length:(unsigned int)arg1;
+ (NSData *)_parseCloudLyricsInfoResponseWithBytes:(char *)arg0 length:(unsigned int)arg1;
+ (NSData *)_parseEditCommandResponseWithBytes:(char *)arg0 length:(unsigned int)arg1;
+ (NSData *)_parseBulkCloudArtworkInfoResponseWithBytes:(char *)arg0 length:(unsigned int)arg1;
+ (NSData *)_parseBulkCloudLyricsInfoResponseWithBytes:(char *)arg0 length:(unsigned int)arg1;
+ (NSData *)_parseControlInterfacesResponseWithBytes:(char *)arg0 length:(unsigned int)arg1;
+ (NSData *)_parseControlPromptResponseWithBytes:(char *)arg0 length:(unsigned int)arg1;
+ (NSData *)_parsePlayStatusResponseWithBytes:(char *)arg0 length:(unsigned int)arg1;
+ (NSData *)_parseListingCollectionWithBytes:(char *)arg0 length:(unsigned int)arg1 usingHandler:(id /* block */)arg2;
+ (NSData *)_parseDictionaryCollectionWithBytes:(char *)arg0 length:(unsigned int)arg1;
+ (NSData *)_parseUpdateTypeWithBytes:(char *)arg0 length:(unsigned int)arg1;
+ (NSData *)_parseBrowseListingWithBytes:(char *)arg0 length:(unsigned int)arg1;
+ (NSData *)_parseListingItemWithBytes:(char *)arg0 length:(unsigned int)arg1 usingHandler:(id /* block */)arg2;
+ (NSData *)parseErrorInResponseData:(NSData *)arg0;
+ (void)enumerateItemsInResponseData:(NSData *)arg0 usingHandler:(id /* block */)arg1;
+ (void)enumerateDeletedItemsInResponseData:(NSData *)arg0 usingHandler:(id /* block */)arg1;
+ (NSData *)_parseItemIDArrayWithBytes:(char *)arg0 length:(unsigned int)arg1;

@end
