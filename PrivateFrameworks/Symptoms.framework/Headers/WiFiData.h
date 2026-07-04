/* Runtime dump - WiFiData
 * Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
 */

@interface WiFiData : NSManagedObject

@property (retain, nonatomic) NSString * bssid;
@property (retain, nonatomic) NSNumber * isLinkLocalAddr;
@property (retain, nonatomic) NSNumber * latitude;
@property (retain, nonatomic) NSNumber * linkQuality;
@property (retain, nonatomic) NSNumber * locAccuracy;
@property (retain, nonatomic) NSNumber * longitude;
@property (retain, nonatomic) NSNumber * rfu1;
@property (retain, nonatomic) NSNumber * rfu3;
@property (retain, nonatomic) NSNumber * rfu2;
@property (retain, nonatomic) NSNumber * rssi;
@property (retain, nonatomic) NSString * ssid;
@property (retain, nonatomic) NSNumber * state;
@property (retain, nonatomic) NSNumber * statsInBytesActual;
@property (retain, nonatomic) NSNumber * statsInBytesBase;
@property (retain, nonatomic) NSNumber * statsOutBytesActual;
@property (retain, nonatomic) NSNumber * statsOutBytesBase;
@property (retain, nonatomic) NSNumber * statsTCPCntActual;
@property (retain, nonatomic) NSNumber * statsTCPCntBase;
@property (retain, nonatomic) NSNumber * timeAt;
@property (retain, nonatomic) NSDate * timeStamp;
@property (retain, nonatomic) NSNumber * dhcpLeaseTime;
@property (retain, nonatomic) NSNumber * isAdHoc;
@property (retain, nonatomic) NSNumber * isCaptive;
@property (retain, nonatomic) NSSet * tookHit;

@end
