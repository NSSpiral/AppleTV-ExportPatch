/* Runtime dump - HSControlPromptEntryRequest
 * Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@interface HSControlPromptEntryRequest : HSRequest
{
    NSDictionary * _attributes;
    unsigned int _interfaceID;
}

@property (readonly, nonatomic) NSDictionary * attributes;
@property (readonly, nonatomic) unsigned int interfaceID;

+ (NSObject *)requestWithInterfaceID:(unsigned int)arg0 attributes:(NSDictionary *)arg1;
+ (NSObject *)portInfoRequestWithInterfaceID:(unsigned int)arg0 key:(unsigned int)arg1;

- (NSDictionary *)attributes;
- (void).cxx_destruct;
- (unsigned int)interfaceID;
- (HSControlPromptEntryRequest *)initWithInterfaceID:(unsigned int)arg0 attributes:(NSDictionary *)arg1;
- (NSDictionary *)_bodyDataForAttributes:(NSDictionary *)arg0;
- (NSObject *)_commandStringForCommand:(unsigned int)arg0;

@end
