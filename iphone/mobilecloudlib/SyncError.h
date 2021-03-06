/**
 * Copyright (c) {2003,2010} {openmobster@gmail.com} {individual contributors as indicated by the @authors tag}.
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 */

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "CloudDBManager.h"

extern NSString *const _RESET_SYNC_STATE;

/**
 * 
 * @author openmobster@gmail.com
 */
@interface SyncError : NSManagedObject 
{

}

@property (nonatomic,retain) NSString *code;
@property (nonatomic,retain) NSString *source;
@property (nonatomic,retain) NSString *target;

//Persistence related
+(NSArray *) all;
+(SyncError *) getInstance:(NSString *)code :(NSString *)source :(NSString *)target;
-(BOOL) saveInstance;
+(BOOL)delete:(SyncError *)syncError;
+(BOOL)deleteAll;

@end
