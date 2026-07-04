/* Runtime dump - HSControlPromptUpdateRequest
 * Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@interface HSControlPromptUpdateRequest : HSRequest
{
    unsigned int _promptID;
}

+ (NSObject *)requestWithInterfaceID:(unsigned int)arg0 promptID:(unsigned int)arg1;

- (char)isConcurrent;
- (double)timeoutInterval;
- (HSControlPromptUpdateRequest *)initWithInterfaceID:(unsigned int)arg0 promptID:(unsigned int)arg1;
- (NSURLResponse *)canonicalResponseForResponse:(NSURLResponse *)arg0;

@end
