//
//  Definitions.h
//  ChattAR
//
//  Created by Igor Alefirenko on 04/09/2013.
//  Copyright (c) 2013 Stefano Antonelli. All rights reserved.
//

#ifndef ChattAR_Definitions_h
#define ChattAR_Definitions_h

#define IS_HEIGHT_GTE_568 [[UIScreen mainScreen ] bounds].size.height >= 568.0f
#define IS_IOS_6 [[[UIDevice currentDevice] systemVersion] floatValue] >= 6.0f

#define kNotificationDidLogin       @"kNotificationDidLogin"
#define kNotificationRowSelected    @"rowSelected"

// QBCO Request keys:
#define  kLimit      @"limit"
#define  kSkip       @"skip"
#define  kSortDesc   @"sort_desc"


#define kGetFBFirstName     [[FBStorage shared].currentFBUser objectForKey:kFirstName]
#define kGetFBLastName      [[FBStorage shared].currentFBUser objectForKey:kLastName]


// Table Tags:
#define  kTrendingTableViewTag      1011
#define  kLocalTableViewTag         1012

#define kTrendingPaginatorTag       1001
#define kLocalPaginatorTag          1002

// Map View Tag
#define kMapViewControllerTag       1231

// TableViewCell definitions:
#define kUserName           @"username"
#define kQuote              @"quote"
#define kUserPhotoUrl       @"user_photo_url"
#define kDateTime           @"datetime"
#define kRank               @"rank"

// Segue Identifiers
#define kChatSegueIdentifier        @"Chat"
#define kMapSegueIdentifier         @"Map"
#define kARSegueIdentifier          @"AR"
#define kAboutSegueIdentifier       @"About"
#define kDialogsSegueIdentifier     @"Dialogs"

#define padding           20.0

#define FB @"https://graph.facebook.com"

// Facebook Macro
#define FBAccessTokenKey       @"FBAccessTokenKey"
#define GetFBAccessToken       [[[FBStorage shared] fbUserToken] objectForKey:FBAccessTokenKey]
#define kFacebookKey           @"facebook"

#define kMe					@"me"
#define kResponse			@"response"
#define kData				@"data"
#define kUrl				@"url"
#define kName				@"name"
#define kPicture			@"picture"
#define kLocation			@"location"
#define kHometown			@"hometown"
#define kStatuses			@"statuses"
#define kFields				@"fields"
#define kMessage			@"message"
#define kId					@"id"
#define kFirstName			@"first_name"
#define kLastName			@"last_name"
#define kInbox				@"inbox"
#define kComments			@"comments"
#define kLikes              @"likes"
#define kFrom				@"from"
#define kTo					@"to"
#define kBody				@"body"
#define kId                 @"id"
#define kPlace              @"place"
#define kPhoto              @"photo"
#define kLatitude           @"latitude"
#define kLongitude          @"longitude"
#define kDate               @"date"
#define kFbID               @"fbid"
#define kQbID               @"qbid"
#define	kCreatedTime		@"created_time"
#define	kUpdatedTime		@"updated_time"
#define kFavorites			@"favorites"
#define kComments           @"comments"
#define kError              @"error"
#define kPaging             @"paging"
#define kNext               @"next"

#define kGET                @"GET"

#define APP_ID              @"464189473609303"

// QuickBlox ChatRoom Class
#define kChatRoom   @"Chatroom"

// AR
#define maxARDistance 20000000

#define minARMarkerScale 0.65f
#define countOfScaledChunks 7
#define scaleStep() (1-minARMarkerScale)/countOfScaledChunks

#define minARMarkerAlpha 0.6f
#define alphaStep() (1-minARMarkerAlpha)/countOfScaledChunks

typedef void(^FBResultBlock)(id result);

typedef enum {
    // Me
    FBQueriesTypesUserProfile,
    //
    // Friends
    FBQueriesTypesFriendsGet,
	FBQueriesTypesFriendsGetCheckins,
	FBQueriesTypesUsersProfiles,
    //
    FBQueriesTypesWall,
    FBQueriesTypesGetInboxMessages,
    
} FBQueriesTypes;

#endif