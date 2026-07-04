/* Runtime dump - CECMessage
 * Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@interface CECMessage : NSObject
{
    struct CECFrame _frame;
}

@property (readonly, nonatomic) unsigned char initiator;
@property (readonly, nonatomic) unsigned char destination;
@property (readonly, nonatomic) int messageType;
@property (readonly, nonatomic) unsigned char length;
@property (readonly, nonatomic) struct CECFrame frame;
@property (readonly, nonatomic) char shouldBeIgnored;
@property (readonly, nonatomic) char isBroadcast;
@property (readonly, nonatomic) double nominalLatency;

+ (CECMessage *)userControlPressed:(struct CECUserControl)arg0 from:(unsigned char)arg1 to:(unsigned char)arg2;
+ (NSObject *)activeSourceFrom:(unsigned char)arg0 physicalAddress:(unsigned short)arg1;
+ (NSObject *)imageViewOnFrom:(unsigned char)arg0 to:(unsigned char)arg1;
+ (NSObject *)textViewOnFrom:(unsigned char)arg0 to:(unsigned char)arg1;
+ (NSObject *)inactiveSourceFrom:(unsigned char)arg0 to:(unsigned char)arg1 physicalAddress:(unsigned short)arg2;
+ (NSObject *)requestActiveSourceFrom:(unsigned char)arg0;
+ (NSObject *)routingChangeFrom:(unsigned char)arg0 originalAddress:(unsigned short)arg1 newAddress:(unsigned short)arg2;
+ (NSObject *)routingInformationFrom:(unsigned char)arg0 physicalAddress:(unsigned short)arg1;
+ (NSObject *)setStreamPathFrom:(unsigned char)arg0 physicalAddress:(unsigned short)arg1;
+ (NSObject *)standbyFrom:(unsigned char)arg0 to:(unsigned char)arg1;
+ (NSString *)cecVersion:(unsigned char)arg0 from:(unsigned char)arg1 to:(unsigned char)arg2;
+ (NSObject *)getCECVersionFrom:(unsigned char)arg0 to:(unsigned char)arg1;
+ (NSObject *)givePhysicalAddressFrom:(unsigned char)arg0 to:(unsigned char)arg1;
+ (NSObject *)getMenuLanguageFrom:(unsigned char)arg0 to:(unsigned char)arg1;
+ (NSObject *)pollFrom:(unsigned char)arg0 to:(unsigned char)arg1;
+ (NSString *)reportPhysicalAddress:(unsigned short)arg0 deviceType:(unsigned char)arg1 from:(unsigned char)arg2;
+ (NSString *)setMenuLanguage:(struct CECLanguage)arg0 from:(unsigned char)arg1;
+ (CECMessage *)deckControlWithMode:(unsigned char)arg0 from:(unsigned char)arg1 to:(unsigned char)arg2;
+ (NSDictionary *)deckStatusWithInfo:(unsigned char)arg0 from:(unsigned char)arg1 to:(unsigned char)arg2;
+ (NSURLRequest *)giveDeckStatusWithRequest:(unsigned char)arg0 from:(unsigned char)arg1 to:(unsigned char)arg2;
+ (CECMessage *)playWithMode:(unsigned char)arg0 from:(unsigned char)arg1 to:(unsigned char)arg2;
+ (NSObject *)deviceVendorID:(unsigned int)arg0 from:(unsigned char)arg1;
+ (NSObject *)giveDeviceVendorIDFrom:(unsigned char)arg0 to:(unsigned char)arg1;
+ (NSObject *)giveOSDNameFrom:(unsigned char)arg0 to:(unsigned char)arg1;
+ (NSString *)setOSDName:(NSString *)arg0 from:(unsigned char)arg1 to:(NSObject *)arg2;
+ (NSObject *)userControlReleasedFrom:(unsigned char)arg0 to:(unsigned char)arg1;
+ (NSObject *)giveDevicePowerStatusFrom:(unsigned char)arg0 to:(unsigned char)arg1;
+ (CECMessage *)reportPowerStatus:(unsigned char)arg0 from:(unsigned char)arg1 to:(unsigned char)arg2;
+ (CECMessage *)featureAbort:(unsigned char)arg0 reason:(unsigned char)arg1 from:(unsigned char)arg2 to:(unsigned char)arg3;
+ (NSObject *)abortFrom:(unsigned char)arg0 to:(unsigned char)arg1;
+ (NSObject *)giveSystemAudioModeStatusFrom:(unsigned char)arg0 to:(unsigned char)arg1;
+ (NSString *)systemAudioModeRequestWithPhysicalAddress:(unsigned short)arg0 from:(unsigned char)arg1 to:(unsigned char)arg2;
+ (NSObject *)messageWithFrame:(struct CECFrame)arg0;

- (int)messageType;
- (CECMessage *)initWithFrame:(struct CECFrame)arg0;
- (struct CECFrame)frame;
- (NSString *)description;
- (NSString *)debugDescription;
- (unsigned char)length;
- (unsigned char)destination;
- (char)parseDeviceVendorID:(unsigned int *)arg0;
- (char)parseReportPhysicalAddress:(unsigned int *)arg0 deviceType:(unsigned int *)arg1;
- (char)isBroadcast;
- (double)nominalLatency;
- (char)shouldBeIgnored;
- (char)parseSetMenuLanguage:(struct CECLanguage *)arg0;
- (char)parseActiveSourcePhysicalAddress:(unsigned int *)arg0;
- (char)parseInactiveSourcePhysicalAddress:(unsigned int *)arg0;
- (char)parseRoutingChangeOriginalAddress:(unsigned int *)arg0 newAddress:(unsigned int *)arg1;
- (char)parseRoutingInformationPhysicalAddress:(unsigned int *)arg0;
- (char)parseSetStreamPathPhysicalAddress:(unsigned int *)arg0;
- (char)parsePlayMode:(unsigned int *)arg0;
- (char)parseDeckControlMode:(unsigned int *)arg0;
- (char)parseDeckStatusInfo:(unsigned int *)arg0;
- (char)parseFeatureAbortOpcode:(char *)arg0 reason:(unsigned char *)arg1;
- (char)parseCECVersion:(unsigned char *)arg0;
- (char)parseReportPowerStatus:(unsigned int *)arg0;
- (char)parseGiveDeckStatusRequest:(unsigned char *)arg0;
- (char)parseUserControlPressed:(struct CECUserControl *)arg0;
- (char)parseSystemAudioModeStatus:(unsigned int *)arg0;
- (char *)_operandsWithLength:(SEL)arg0;
- (unsigned char)_operandsLength;
- (char)parseSetOSDName:(id *)arg0;
- (unsigned char)initiator;

@end
